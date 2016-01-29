#import "AppDelegate.h"
#import <objc/runtime.h>

NSString * const TerminalAlerterBundleID = @"fr.sodadi.alerter";
NSString * const NotificationCenterUIBundleID = @"com.apple.notificationcenterui";

// Set OS Params
#define NSAppKitVersionNumber10_8 1187
#define NSAppKitVersionNumber10_9 1265

#define contains(str1, str2) ([str1 rangeOfString: str2 ].location != NSNotFound)

NSString *_fakeBundleIdentifier = nil;
NSUserNotification *currentNotification = nil ;

@implementation NSBundle (FakeBundleIdentifier)

// Overriding bundleIdentifier works, but overriding NSUserNotificationAlertStyle does not work.

- (NSString *)__bundleIdentifier;
{
    if (self == [NSBundle mainBundle]) {
        return _fakeBundleIdentifier ? _fakeBundleIdentifier : TerminalAlerterBundleID;
    } else {
        return [self __bundleIdentifier];
    }
}

@end

static BOOL
InstallFakeBundleIdentifierHook()
{
    Class class = objc_getClass("NSBundle");
    if (class) {
        method_exchangeImplementations(class_getInstanceMethod(class, @selector(bundleIdentifier)),
                                       class_getInstanceMethod(class, @selector(__bundleIdentifier)));
        return YES;
    }
    return NO;
}

static BOOL
isMavericks()
{
    if (floor(NSAppKitVersionNumber) <= NSAppKitVersionNumber10_8) {
        /* On a 10.8 - 10.8.x system */
        return NO;
    } else {
        /* 10.9 or later system */
        return YES;
    }
}

@implementation NSUserDefaults (SubscriptAndUnescape)
- (id)objectForKeyedSubscript:(id)key;
{
    id obj = [self objectForKey:key];
    if ([obj isKindOfClass:[NSString class]] && [(NSString *)obj hasPrefix:@"\\"]) {
        obj = [(NSString *)obj substringFromIndex:1];
    }
    return obj;
}
@end


@implementation AppDelegate



+(void)initializeUserDefaults
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    // initialize the dictionary with default values depending on OS level
    NSDictionary *appDefaults;
    
    if (isMavericks()) {
        //10.9
        appDefaults = @{@"sender": @"com.apple.Terminal"};
    } else {
        //10.8
        appDefaults = @{@"": @"message"};
    }
    
    // and set them appropriately
    [defaults registerDefaults:appDefaults];
}



- (void)printHelpBanner;
{
    const char *appName = [[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleExecutable"] UTF8String];
    const char *appVersion = [[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"] UTF8String];
    printf("%s (%s) is a command-line tool to send OS X User Notifications.   \n" \
           "\n" \
           "Usage: %s -[message|list|remove] [VALUE|ID|ID] [options]\n" \
           "\n" \
           "   Either of these is required (unless message data is piped to the tool):\n" \
           "\n" \
           "       -help              Display this help banner.\n" \
           "       -message VALUE     The notification message.\n" \
           "       -remove ID         Removes a notification with the specified ‘group’ ID.\n" \
           "       -list ID           If the specified ‘group’ ID exists show when it was delivered,\n" \
           "                          or use ‘ALL’ as ID to see all notifications.\n" \
           "                          The output is a tab-separated list.\n"
           "\n" \
           "   Reply type notification:\n" \
           "\n" \
           "       -reply VALUE       The notification will be displayed as a reply type alert, VALUE used as placeholder.\n" \
           "\n" \
           "   Actions type notification:\n" \
           "\n" \
           "       -actions VALUE1,VALUE2.\n" \
           "                          The notification actions avalaible.\n" \
           "                          When you provide more than one value, a dropdown will be displayed.\n" \
           "                          You can customize this dropdown label with the next option.\n" \
           "       -dropdownLabel VALUE    The notification actions dropdown title (only when multiples actions are provided.\n" \
           "\n" \
           "   Optional:\n" \
           "\n" \
           "       -title VALUE       The notification title. Defaults to ‘Terminal’.\n" \
           "       -subtitle VALUE    The notification subtitle.\n" \
           "       -closeLabel VALUE  The notification close button label.\n" \
           "       -sound NAME        The name of a sound to play when the notification appears. The names are listed\n" \
           "                          in Sound Preferences. Use 'default' for the default notification sound.\n" \
           "       -group ID          A string which identifies the group the notifications belong to.\n" \
           "                          Old notifications with the same ID will be removed.\n" \
           "       -sender ID         The bundle identifier of the application that should be shown as the sender, including its icon.\n" \
           "       -appIcon URL       The URL of a image to display instead of the application icon (Mavericks+ only)\n" \
           "       -contentImage URL  The URL of a image to display attached to the notification (Mavericks+ only)\n" \
           "       -json       Write only event or value to stdout \n" \
           "       -timeout NUMBER    Close the notification after NUMBER seconds.\n" \
           "\n" \
           "When the user activates or close a notification, the results are logged to stdout as a json struct.\n" \
           "\n" \
           "Note that in some circumstances the first character of a message has to be escaped in order to be recognized.\n" \
           "An example of this is when using an open bracket, which has to be escaped like so: ‘\\[’.\n" \
           "\n" \
           "For more information see https://github.com/alloy/terminal-notifier.\n",
           appName, appVersion, appName);
}

- (void)applicationDidFinishLaunching:(NSNotification *)notification;
{
    if ([[[NSProcessInfo processInfo] arguments] indexOfObject:@"-help"] != NSNotFound) {
        [self printHelpBanner];
        exit(0);
    }
    
    NSArray *runningProcesses = [[[NSWorkspace sharedWorkspace] runningApplications] valueForKey:@"bundleIdentifier"];
    if ([runningProcesses indexOfObject:NotificationCenterUIBundleID] == NSNotFound) {
        NSLog(@"[!] Unable to post a notification for the current user (%@), as it has no running NotificationCenter instance.", NSUserName());
        exit(1);
    }
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    NSString *subtitle = defaults[@"subtitle"];
    NSString *message  = defaults[@"message"];
    NSString *remove   = defaults[@"remove"];
    NSString *list     = defaults[@"list"];
    NSString *sound    = defaults[@"sound"];

    
    // If there is no message and data is piped to the application, use that
    // instead.
    if (message == nil && !isatty(STDIN_FILENO)) {
        NSData *inputData = [NSData dataWithData:[[NSFileHandle fileHandleWithStandardInput] readDataToEndOfFile]];
        message = [[NSString alloc] initWithData:inputData encoding:NSUTF8StringEncoding];
    }
    
    if (message == nil && remove == nil && list == nil) {
        [self printHelpBanner];
        exit(1);
    }
    
    if (list) {
        [self listNotificationWithGroupID:list];
        exit(0);
    }
    
    // Install the fake bundle ID hook so we can fake the sender. This also
    // needs to be done to be able to remove a message.
    if (defaults[@"sender"]) {
        @autoreleasepool {
            if (InstallFakeBundleIdentifierHook()) {
                _fakeBundleIdentifier = defaults[@"sender"];
            }
        }
    }
    
    if (remove) {
        [self removeNotificationWithGroupID:remove];
        if (message == nil) exit(0);
    }
    
    if (message) {
        NSMutableDictionary *options = [NSMutableDictionary dictionary];
        if (defaults[@"closeLabel"])  options[@"closeLabel"]   = defaults[@"closeLabel"];
        if (defaults[@"dropdownLabel"])  options[@"dropdownLabel"]   = defaults[@"dropdownLabel"];
        
        if (defaults[@"actions"])options[@"actions"]   = defaults[@"actions"];
        if([[[NSProcessInfo processInfo] arguments] containsObject:@"-reply"] == true) {
            options[@"reply"] = @"Reply" ;
            if (defaults[@"reply"])  options[@"reply"]   = defaults[@"reply"];
        }
        
        options[@"output"] = @"outputEvent" ;
        if([[[NSProcessInfo processInfo] arguments] containsObject:@"-json"] == true) {
            options[@"output"] = @"json" ;
        }
        
        
        if (defaults[@"group"])    options[@"groupID"]          = defaults[@"group"];
        if (defaults[@"appIcon"])  options[@"appIcon"]          = defaults[@"appIcon"];
        if (defaults[@"contentImage"]) options[@"contentImage"] = defaults[@"contentImage"];
        
        options[@"timeout"] = @"0" ;
        if (defaults[@"timeout"])    options[@"timeout"]          = defaults[@"timeout"];
        
        options[@"uuid"] = [NSString stringWithFormat:@"%ld", self.hash] ;
        

        
        [self deliverNotificationWithTitle:defaults[@"title"] ?: @"Terminal"
                                  subtitle:subtitle
                                   message:message
                                   options:options
                                     sound:sound];
    }
}


- (NSImage*)getImageFromURL:(NSString *) url;
{
    NSURL *imageURL = [NSURL URLWithString:url];
    if([[imageURL scheme] length] == 0){
        // Prefix 'file://' if no scheme
        imageURL = [NSURL fileURLWithPath:url];
    }
    return [[NSImage alloc] initWithContentsOfURL:imageURL];
}



- (void)deliverNotificationWithTitle:(NSString *)title
                            subtitle:(NSString *)subtitle
                             message:(NSString *)message
                             options:(NSDictionary *)options
                               sound:(NSString *)sound;
{
    // First remove earlier notification with the same group ID.
    if (options[@"groupID"]) [self removeNotificationWithGroupID:options[@"groupID"]];
    
    NSUserNotification *userNotification = [NSUserNotification new];
    userNotification.title = title;
    userNotification.subtitle = subtitle;
    userNotification.informativeText = message;
    userNotification.userInfo = options;
    
    
    
    if(isMavericks()){
        // Mavericks options
        if(options[@"appIcon"]){
            // replacement app icon
            [userNotification setValue:[self getImageFromURL:options[@"appIcon"]] forKey:@"_identityImage"];
            [userNotification setValue:@(false) forKey:@"_identityImageHasBorder"];
        }
        if(options[@"contentImage"]){
            // content image
            userNotification.contentImage = [self getImageFromURL:options[@"contentImage"]];
        }
    }
    
    // Actions
    if (options[@"actions"]){
        [userNotification setValue:@YES forKey:@"_showsButtons"];
        NSArray *myActions = [options[@"actions"] componentsSeparatedByString:@","];
        if (myActions.count > 1) {
            [userNotification setValue:@YES forKey:@"_alwaysShowAlternateActionMenu"];
            [userNotification setValue:myActions forKey:@"_alternateActionButtonTitles"];
            
            //Main Actions Title
            if(options[@"dropdownLabel"]){
                userNotification.actionButtonTitle = options[@"dropdownLabel"];
                userNotification.hasActionButton = 1 ;
            }
        }else{
            userNotification.actionButtonTitle = options[@"actions"];
        }
    }else if (options[@"reply"]) {
        [userNotification setValue:@YES forKey:@"_showsButtons"];
        userNotification.hasReplyButton = 1;
        userNotification.responsePlaceholder = options[@"reply"];
    }
    
    // Close button
    if(options[@"closeLabel"]){
        userNotification.otherButtonTitle = options[@"closeLabel"];
    }
    
    if (sound != nil) {
        userNotification.soundName = [sound isEqualToString: @"default"] ? NSUserNotificationDefaultSoundName : sound ;
    }
    
    NSUserNotificationCenter *center = [NSUserNotificationCenter defaultUserNotificationCenter];
    center.delegate = self;
        [center deliverNotification:userNotification];
}



- (void)removeNotificationWithGroupID:(NSString *)groupID;
{
    NSUserNotificationCenter *center = [NSUserNotificationCenter defaultUserNotificationCenter];
    for (NSUserNotification *userNotification in center.deliveredNotifications) {
        if ([@"ALL" isEqualToString:groupID] || [userNotification.userInfo[@"groupID"] isEqualToString:groupID]) {
            [center removeDeliveredNotification:userNotification];
            [center removeDeliveredNotification:userNotification];
        }
    }
}


- (BOOL)executeShellCommand:(NSString *)command;
{
    NSPipe *pipe = [NSPipe pipe];
    NSFileHandle *fileHandle = [pipe fileHandleForReading];
    
    NSTask *task = [NSTask new];
    task.launchPath = @"/bin/sh";
    task.arguments = @[@"-c", command];
    task.standardOutput = pipe;
    task.standardError = pipe;
    [task launch];
    
    NSData *data = nil;
    NSMutableData *accumulatedData = [NSMutableData data];
    while ((data = [fileHandle availableData]) && [data length]) {
        [accumulatedData appendData:data];
    }
    
    [task waitUntilExit];
    return [task terminationStatus] == 0;
}

- (BOOL)userNotificationCenter:(NSUserNotificationCenter *)center
     shouldPresentNotification:(NSUserNotification *)notification;
{
    return YES;
}

// Once the notification is delivered we can exit. (Only if no actions or reply
// WORKS
- (void)userNotificationCenter:(NSUserNotificationCenter *)center
        didDeliverNotification:(NSUserNotification *)userNotification;
{
    currentNotification = userNotification ;

    dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                   ^{
                       __block BOOL notificationStillPresent;
                       do {
                           notificationStillPresent = NO;
                           for (NSUserNotification *nox in [[NSUserNotificationCenter defaultUserNotificationCenter] deliveredNotifications]) {
                               if ([nox.userInfo[@"uuid"]  isEqualToString:[NSString stringWithFormat:@"%ld", self.hash] ]) notificationStillPresent = YES;
                           }
                           if (notificationStillPresent) [NSThread sleepForTimeInterval:0.20f];
                       } while (notificationStillPresent);
                           dispatch_async(dispatch_get_main_queue(), ^{
                               NSDictionary *udict = @{@"activationType" : @"closed", @"activationValue" : userNotification.otherButtonTitle};
                               [self Quit:udict notification:userNotification] ;
                               exit(0);
                           });
                });
    
    
    
    if ([userNotification.userInfo[@"timeout"] integerValue] > 0){
        dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),
                       ^{
                           [NSThread sleepForTimeInterval:[userNotification.userInfo[@"timeout"] integerValue]];
                               [center removeDeliveredNotification:currentNotification];
                               [center removeDeliveredNotification:userNotification];
                                NSDictionary *udict = @{@"activationType" : @"timeout"};
                               [self Quit:udict notification:userNotification] ;
                                exit(0);

                       });
    }

    
    
    
}
//-(void)performSearch:(NSString *)UUID {
//    BOOL notificationStillPresent;
//    do {
//        notificationStillPresent = NO;
//        for (NSUserNotification *nox in [[NSUserNotificationCenter defaultUserNotificationCenter] deliveredNotifications]) {
//            NSLog(@"%@  %@", [NSString stringWithFormat:@"%ld", self.hash], nox.userInfo[@"uuid"]);
//            if ([nox.userInfo[@"uuid"]  isEqualToString:[NSString stringWithFormat:@"%ld", self.hash] ]) notificationStillPresent = YES;
//        }
//        if (notificationStillPresent) [NSThread sleepForTimeInterval:0.20f];
//    } while (notificationStillPresent);
//    dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
//        NSLog(@"quiiting  %@", [NSString stringWithFormat:@"%ld", self.hash]);
//        NSDictionary *udict = @{@"activationType" : @"Gone"  };
//        [self Quit:udict notification:currentNotification] ;
//        exit(0);
//    });
//
//    [NSThread exit];
//}
//
//- (void)userNotificationCenter:(NSUserNotificationCenter *)center
//        didDeliverNotification:(NSUserNotification *)userNotification;
//{
//    currentNotification = userNotification ;
//    NSString *UUID = userNotification.userInfo[@"uuid"] ;
//
//    [NSThread detachNewThreadSelector:@selector(performSearch:) toTarget:self withObject:UUID];
//
//
//}




- (void)userNotificationCenter:(NSUserNotificationCenter *)center
       didActivateNotification:(NSUserNotification *)notification {

    if ([notification.userInfo[@"uuid"]  isNotEqualTo:[NSString stringWithFormat:@"%ld", self.hash] ]) {
        return;
    };
    
    
    unsigned long long additionalActionIndex = ULLONG_MAX;
    
    NSString* ActionsClicked = @"" ;
    switch (notification.activationType) {
            
        case NSUserNotificationActivationTypeAdditionalActionClicked:
        case NSUserNotificationActivationTypeActionButtonClicked:
            if ([[(NSObject*)notification valueForKey:@"_alternateActionButtonTitles"] count] > 1 ){
                NSNumber *alternateActionIndex = [(NSObject*)notification valueForKey:@"_alternateActionIndex"];
                additionalActionIndex = [alternateActionIndex unsignedLongLongValue];
                ActionsClicked = [(NSObject*)notification valueForKey:@"_alternateActionButtonTitles"][additionalActionIndex];
                
                NSDictionary *udict = @{@"activationType" : @"actionClicked", @"activationValue" : ActionsClicked, @"activationValueIndex" :[NSString stringWithFormat:@"%llu", additionalActionIndex]};
                [self Quit:udict notification:notification] ;
            }else{
                NSDictionary *udict = @{@"activationType" : @"actionClicked", @"activationValue" : notification.actionButtonTitle};
                [self Quit:udict notification:notification] ;
            }
            break;
            
        case NSUserNotificationActivationTypeContentsClicked:
            [self Quit:@{@"activationType" : @"contentsClicked"} notification:notification] ;
            break;
            
        case NSUserNotificationActivationTypeReplied:
            [self Quit:@{@"activationType" : @"replied",@"activationValue":notification.response.string} notification:notification] ;
            break;
        case NSUserNotificationActivationTypeNone:
        default:
            [self Quit:@{@"activationType" : @"none"} notification:notification] ;
            break;
    }
    
    
    [center removeDeliveredNotification:notification];
    [center removeDeliveredNotification:currentNotification];
    exit(0) ;
}

- (BOOL)Quit:(NSDictionary *)udict notification:(NSUserNotification *)notification;
{
    if ([notification.userInfo[@"output"] isEqualToString:@"outputEvent"]) {
        if ([udict[@"activationType"] isEqualToString:@"closed"]) {
            if ([udict[@"activationValue"] isEqualToString:@""]) {
                printf("%s", "@CLOSED" );
            }else{
                printf("%s", [udict[@"activationValue"] UTF8String] );
            }
        } else  if ([udict[@"activationType"] isEqualToString:@"timeout"]) {
            printf("%s", "@TIMEOUT" );
        } else  if ([udict[@"activationType"] isEqualToString:@"contentsClicked"]) {
            printf("%s", "@CONTENTCLICKED" );
        } else{
            if ([udict[@"activationValue"] isEqualToString:@""]) {
                printf("%s", "@ACTIONCLICKED" );
            }else{
                printf("%s", [udict[@"activationValue"] UTF8String] );
            }
        }

        return 1 ;
    }
    
    
    
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd HH:mm:ss Z";
    
    
    // Dictionary with several key/value pairs and the above array of arrays
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    [dict addEntriesFromDictionary:udict] ;
    [dict setValue:[dateFormatter stringFromDate:notification.actualDeliveryDate] forKey:@"deliveredAt"] ;
    [dict setValue:[dateFormatter stringFromDate:[NSDate new]] forKey:@"activationAt"] ;
    
    NSError *error = nil;
    NSData *json;
    
    // Dictionary convertable to JSON ?
    if ([NSJSONSerialization isValidJSONObject:dict])
    {
        // Serialize the dictionary
        json = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
        
        // If no errors, let's view the JSON
        if (json != nil && error == nil)
        {
            NSString *jsonString = [[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding];
            printf("%s", [jsonString cStringUsingEncoding:NSUTF8StringEncoding]);
        }
    }
    
    return 1 ;
}


- (void)listNotificationWithGroupID:(NSString *)listGroupID;
{
    NSUserNotificationCenter *center = [NSUserNotificationCenter defaultUserNotificationCenter];
    
    NSMutableArray *lines = [NSMutableArray array];
    for (NSUserNotification *userNotification in center.deliveredNotifications) {
        NSString *deliveredgroupID = userNotification.userInfo[@"groupID"];
        NSString *title            = userNotification.title;
        NSString *subtitle         = userNotification.subtitle;
        NSString *message          = userNotification.informativeText;
        NSString *deliveredAt      = [userNotification.actualDeliveryDate description];
        if ([@"ALL" isEqualToString:listGroupID] || [deliveredgroupID isEqualToString:listGroupID]) {
            NSMutableDictionary *dict = [NSMutableDictionary dictionary];
            [dict setValue:deliveredgroupID forKey:@"GroupID"] ;
            [dict setValue:title forKey:@"Title"] ;
            [dict setValue:subtitle forKey:@"subtitle"] ;
            [dict setValue:message forKey:@"message"] ;
            [dict setValue:deliveredAt forKey:@"deliveredAt"] ;
            [lines addObject:dict];
        }
    }
    
    if (lines.count > 0) {
        NSData *json;
        NSError *error = nil;
        // Dictionary convertable to JSON ?
        if ([NSJSONSerialization isValidJSONObject:lines])
        {
            // Serialize the dictionary
            json = [NSJSONSerialization dataWithJSONObject:lines options:NSJSONWritingPrettyPrinted error:&error];
            
            // If no errors, let's view the JSON
            if (json != nil && error == nil)
            {
                NSString *jsonString = [[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding];
                printf("%s", [jsonString cStringUsingEncoding:NSUTF8StringEncoding]);
            }
        }
        
    }
}

- (void) bye; {
    //Look for the notification sent, remove it when found
    NSString *UUID = currentNotification.userInfo[@"uuid"] ;
    for (NSUserNotification *nox in [[NSUserNotificationCenter defaultUserNotificationCenter] deliveredNotifications]) {
        if ([nox.userInfo[@"uuid"] isEqualToString:UUID ]){
            [[NSUserNotificationCenter defaultUserNotificationCenter] removeDeliveredNotification:nox] ;
            [[NSUserNotificationCenter defaultUserNotificationCenter] removeDeliveredNotification:nox] ;
        }
    }
}

@end
