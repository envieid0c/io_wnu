//
//  main.m
//  alerter
//
//  Created by Valere JEANTET on 18/12/2015.
//  Copyright © 2015 JEANTET Valere. All rights reserved.
//  Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)
//

#import "AppDelegate.h"


AppDelegate * appDelegate ;

void SIGTERM_handler(int signum) {
    [appDelegate bye];
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    signal(SIGTERM, SIGTERM_handler);
    signal(SIGINT, SIGTERM_handler);
    
    NSApplication * application = [NSApplication sharedApplication];
    appDelegate = [AppDelegate new];
    
    [application setDelegate:appDelegate];
    [application run];
    
    return EXIT_SUCCESS;
}

