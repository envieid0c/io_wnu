#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

SUDO=sudo

BUILDER=$USER # don't touch!

SLE=/System/Library/Extensions/
APP=/Library/Application\ Support/WLAN/StatusBarApp.app/
SBIN="$APP"Contents/sbin/
CONF="$APP"Contents/conf/
MAC=/Library/Application\ Support/WLAN/com.realtek.utility.wifi/
ZSTD=/tmp/work/soft/zstd

download() {
    rm -rf /tmp/work
    cd /tmp
    wget https://github.com/envieid0c/io_wnu/raw/master/work/io_wnu.zip
    unzip io_wnu.zip ; cd work/
}

uncompress () {
    ## add library for zstd
    mkdir -p /usr/local/opt/lz4/lib
    cd soft
    unzip lib.zip ; cp -R lib/ /usr/local/opt/lz4/lib
    # decompress zatd package
	tar -xf zstd.tar.xz
	cd ../bin
	$ZSTD -d io_build.command.zst
	$ZSTD -d io_wnu_install.command.zst
	$ZSTD -d io_wnu_popup.command.zst
	$ZSTD -d io_wnu_uninstall.command.zst
	$ZSTD -d io_wnu.command.zst
	rm -rf *.zst
	cd ../lib
	$ZSTD -d libcrypto.1.0.0.dylib.zst
	$ZSTD -d libevent_core-2.1.6.dylib.zst
	$ZSTD -d libevent_extra-2.1.6.dylib.zst
	$ZSTD -d libevent_openssl-2.1.6.dylib.zst
	$ZSTD -d libevent_pthreads-2.1.6.dylib.zst
	$ZSTD -d libevent-2.1.6.dylib.zst
	$ZSTD -d liblzo2.2.dylib.zst
	$ZSTD -d libsodium.23.dylib.zst
	$ZSTD -d libssl.1.0.0.dylib.zst
	rm -rf *.zst
	cd ../sbin
	$ZSTD -d dnscrypt-proxy.toml.zst
	$ZSTD -d dnscrypt-proxy.zst
	$ZSTD -d dumpcap.zst
	$ZSTD -d event_rpcgen.py.zst
	$ZSTD -d io_wnu_popup.zst
	$ZSTD -d io_wnu.zst
	$ZSTD -d minisign.zst
	$ZSTD -d openvpn.zst
	$ZSTD -d pdml2html.xsl.zst
	$ZSTD -d speedtest.py.zst
	$ZSTD -d tor-gencert.zst
	$ZSTD -d tor-resolve.zst
	$ZSTD -d tor.zst
	$ZSTD -d torify.zst
	$ZSTD -d tshark.zst
	rm -rf *.zst
	cd ..
}

io_uninstall() {

    kill_item() {
        process_name="$1"
        #echo "\n[kill_item]:: $process_name"
        pid=$(ps -A | grep "$process_name" |grep -v grep| awk '{print $1}')
        if [ "$pid" ]; then
            #echo "\tkillall::$process_name"
            $SUDO killall -c "$process_name"
        fi
    }

    remove_file() {
        file_name="$1"
        #echo "\n[remove_file]:: $file_name"
        if [ -e "$file_name" ]; then
            #echo "\trm::$file_name"
            $SUDO rm -rf "$file_name"
        fi
    }

    remove_directory() {
        dir_name="$1"
        #echo "\n[remove_directory]:: $dir_name"
        if [ -d "$dir_name" ]; then
            #echo "\trm_dir::$dir_name"
            $SUDO rm -rf "$dir_name"
        fi
    }

    unload_driver() {
        kext_name="$1"
        bundle_id=com.realtek.driver.$1
        #echo "\n[unload_driver]:: $bundle_id"

        index=$(kextstat -b $bundle_id |grep $bundle_id | awk '{print $1}')
        if [ "$index" ]; then
        #echo "\tkextunload::$kext_name"
        #$SUDO kextunload -c "$kext_name"

        if [ -e "$SLE/$kext_name.kext" ]; then
            $SUDO kextunload "$SLE/$kext_name.kext"
            sleep 2
        fi

        if [ -e "/Library/Extensions/$kext_name.kext" ]; then
            $SUDO kextunload "/Library/Extensions/$kext_name.kext"
            sleep 2
        fi

        fi
    }

    remove_wildcard_file() {
        wildcard_file=$1
        #echo "\n[remove_wildcard_file]:: $wildcard_file"
        for efile in $wildcard_file ; do
        #echo "\tefile: $efile"
        $SUDO rm -rf "$efile"
        done
    }

    mydir="$(dirname "$BASH_SOURCE")"
    if [ "$mydir" == "/tmp" ]; then
        echo  "\n\n\033[41;37m Uninstall Wireless Network Utility ? ... [Y/y]:Yes\033[0m"
        read result
        if [ "$result" == "" ]; then
            exit
        fi

        if [ "$result" != "Y" ] && [ "$result" != "y" ]; then
            exit
        fi

    else
        echo "Please type the password of \"root\"..."
    fi

    FROM=`dirname "$0"`

    echo "Terminate Utility"
    kill_item "Wireless-AC Network Utility"
    kill_item "Wireless Network Utility"
    kill_item "TP-LINK Wireless Configuration Utility"
    kill_item "BearExtender"
    kill_item "wpa_supplicant"
    kill_item "StatusBarApp"
    sleep 2

    echo "System Information..."

    UnPreference="/Library/Application Support/WLAN/StatusBarApp.app/Contents/MacOS/UnPref"
    if [ -e "$UnPreference" ]; then
        #$SUDO "$UnPreference" >> /tmp/2.txt
        $SUDO "$UnPreference"
    fi

    echo "Remove Utility Related..."

    # Wlan.Software / WlanAC104.Software / WlanAC.Software / Wlan104.Software
    remove_wildcard_file "/Library/LaunchAgents/Wlan*.Software"

    remove_file "/Library/LaunchAgents/WlanAC.plist"
    remove_file "/Library/LaunchAgents/Wlan.Software.plist"

    remove_wildcard_file "/Users/*/Library/Preferences/com.realtek.*"
    remove_wildcard_file "/Users/*/Library/Preferences/StatusBarApp.plist"
    remove_directory "/Library/Application Support/WLAN"
    
    # Legacy Utility
    remove_directory "/System/Library/CoreServices/StatusBarApp.app"
    remove_directory "/Applications/Wireless-AC Network Utility.app"
    remove_directory "/Applications/Wireless Network Utility.app"
    remove_directory "/Applications/TP-LINK Wireless Configuration Utility.app"
    remove_directory "/Applications/BearExtender.app"

    echo "Remove Install Log..."
    remove_wildcard_file "/private/var/db/receipts/com.realtek.*"
    remove_wildcard_file "/private/var/db/receipts/com.Wlan.*"
    remove_wildcard_file "/private/var/db/receipts/com.wlan.*"
    remove_wildcard_file "/private/var/db/receipts/com.Wireless*.*"
    remove_wildcard_file "/private/var/db/receipts/com.*Utility*.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.*StatusBarApp.*"
    remove_wildcard_file "/private/var/db/receipts/com.*StartUp.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.*Driver*.pkg.*"
    remove_wildcard_file "/private/var/db/receipts/com.UnPref.*"
    remove_wildcard_file "/private/var/db/receipts/com.BearExtender.*"
    remove_wildcard_file "/private/var/db/receipts/com.bearextenderturbo.*"

    echo "Removing Driver..."

    unload_driver "RtWlanU1827"
    unload_driver "RtWlanU"
    unload_driver "RtWlanDisk"
    unload_driver "RTL8812AU"
    unload_driver "RTL8192SU"
    unload_driver "RTL8192CU"
    unload_driver "RTL8188EU"
    unload_driver "RTL8192EU"
    unload_driver "RTL8192DU"
    unload_driver "RTL8723BU"

    #RtWlanU.kext / RtWlanU1827.kext / RtWlanU_192.kext / RtWlanDisk.kext
    remove_wildcard_file "$SLE/RtWlan*.kext"

    #RTL8192SU* / RTL8192CU* / RTL8192DU* / RTL8188EU* / 
    #RTL8192EU* / RTL8723BU* / RTL8812AU*
    remove_wildcard_file "$SLE/RTL8*.kext"

    #For BearExtender
    remove_wildcard_file "/Library/Extensions/RTL8812AU*.kext"


    version=$( /usr/bin/sw_vers -productVersion )
    major=$( awk -F'.' '{print $1}' <<< "${version}" )
    minor=$( awk -F'.' '{print $2}' <<< "${version}" )
    patch=$( awk -F'.' '{print $3}' <<< "${version}" )

    #echo major =$major
    #echo minor =$minor
    #echo patch =$patch

    if [ "$major" -eq 10 ]; then
        #echo major =$major
    
        #if [ "$minor" -eq 6 ]; then
        #   echo 10.6 =$minor
        #   #$SUDO kextcache -v 1 -a i386 -a x86_64 -m /System/Library/Caches/com.apple.kext.caches/Startup/Extensions.mkext $SLE
        #   $SUDO touch $SLE
        #   $SUDO kextcache -i /
        #elif [ "$minor" -ge 7 ] && [ "$minor" -le 10 ]; then
        #   echo 10.7~10.10 =$minor
        #   #$SUDO kextcache -system-prelinked-kernel
        #   #$SUDO kextcache -system-caches
        #   $SUDO touch $SLE
        #
        #elif [ "$minor" -ge 11 ]; then
        #   echo 10.12~ =$minor
        if [ "$minor" -ge 12 ]; then
        #   echo 10.12~ =$minor
            $SUDO touch $SLE
        #   $SUDO kextcache -u
        fi
    fi

    echo "Uninstall Complete..."
}

io_drivers() {
    echo "Install drivers..."
    $SUDO tar -xf kext/RtWlanU1827.tar.xz -C $SLE/
    $SUDO tar -xf kext/RtWlanU.tar.xz -C $SLE/
}

io_cache() {
    echo "Fix cache..."
    $SUDO touch $SLE 2>/dev/null
    $SUDO touch /Library/Extensions 2>/dev/null
    $SUDO kextcache -u / 2>/dev/null
}

io_replace_app() {
    echo "Replace App..."
    $SUDO mkdir -p /Library/Application\ Support/WLAN/
    $SUDO chown "$USER" /Library/Application\ Support/WLAN/ 
    tar -xf app/StatusBarApp.tar.xz -C /Library/Application\ Support/WLAN/
    $SUDO rm -rf /Library/Application\ Support/WLAN/__MACOSX/
}

io_config() {
    echo "Install Config's..."
    mkdir -p /usr/local/sbin
    mkdir -p /usr/local/opt/libevent/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/libsodium/lib/ 2>/dev/null
    mkdir -p /usr/local/opt/openssl/lib/
    mkdir -p /usr/local/Cellar/openssl/1.0.2n/lib/
    mkdir -p /Library/Application\ Support/WLAN/com.realtek.utility.wifi
    $SUDO cp io_wnu.plist /Library/LaunchAgents/
    cp sbin/* "$SBIN"
    cp lib/liblzo2* /usr/local/lib 2>/dev/null
    cp lib/libevent* /usr/local/opt/libevent/lib/ 2>/dev/null
    cp lib/libsodium* /usr/local/opt/libsodium/lib/ 2>/dev/null
    #cp config.ovpn ~/
    cp config/torrc.sample "$CONF"
    tar -xf app/WNU_Switch.workflow.tar.xz -C ~/Library/Services/
    tar -xf soft/zstd.tar.xz -C "$SOFT"
    $SUDO rm -rf ~/Library/Services/__MACOSX/
}

io_permissions() {
    echo "Fix Permissions..."
    chmod +x /Library/Application\ Support/WLAN/StatusBarApp.app/Contents/bin/* 2>/dev/null
    $SUDO chown -R root:wheel /System/Library/Extensions/RtWlanU.kext
    $SUDO chown -R root:wheel /System/Library/Extensions/RtWlanU1827.kext
    $SUDO touch $SLE/ && $SUDO kextcache -u / 2>/dev/null
}

io_fix_mac() {
    echo "Fix MAC-address..."
#autofix disabled wifi (testen on 1 device)
    rm -rf "$MAC"*rfoff.rtl
    osascript -e 'open app "StatusBarApp"' 2>/dev/null
    sleep 3
    grep -rl "0" "$MAC"*rfoff.rtl > "$CONF"MAC ; cat "$CONF"MAC | cut -c 60-71 > "$CONF"DEVICE
    echo "Disabled" > "$CONF"tor
    echo "Disabled" > "$CONF"dnscrypt
    echo ""         > "$CONF"dnscrypt_update
    echo "Disabled" > "$CONF"openvpn
    echo "Disabled" > "$CONF"io_ssh_server
    echo "Enabled"  > "$CONF"utility
    echo ""         > "$CONF"io_ssh
    echo ""         > "$CONF"io_new_hostname
    hostname        > "$CONF"io_old_hostname
}

io_start() {
    echo "Start App..."
    $SUDO kextload $SLE/RtWlanU.kext 2>/dev/null
    $SUDO kextload $SLE/RtWlanU1827.kext 2>/dev/null
    $SUDO killall -9 StatusBarApp 2>/dev/null
    launchctl load -w -F /Library/LaunchAgents/io_wnu.plist >/dev/null
}

clear () {
    cd ~
    rm -rf /tmp/work
    rm -rf /tmp/io_wnu.zip
}

download
uncompress
io_uninstall
io_drivers
io_cache
io_replace_app
io_config
io_permissions
io_fix_mac
io_start
clear
