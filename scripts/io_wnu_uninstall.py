#!/usr/bin/env python

import os
import sys
import zipfile

import os

Password = raw_input('Please enter your root password!')

sudo_command = 'brew update'

execute = os.system('echo %s|sudo -S %s' % (Password, sudo_command))

#ROOT_PATH = "$(cd $(dirname $0) && pwd)"
#ROOT_PATH=os.getcwd();
#print "os.getcwd();"
#os.chdir(ROOT_PATH)
#os.getcwd ()

#cd $ROOT_PATH;

#os.remove("/Users/envieid0c/Desktop/000/1.py")

#sudo launchctl unload /Library/LaunchDaemons/io_wnu.plist 2>/dev/null
#sudo launchctl unload ~/Library/LaunchAgents/io_wnu.plist 2>/dev/null
#sudo launchctl unload /Library/LaunchDaemons/io_wnu_popup.plist 2>/dev/null
#os.remove("Library/LaunchDaemons/io_wnu.plist")
#os.remove("~/Library/LaunchAgents/io_wnu.plist")
#os.remove("/Library/LaunchDaemons/io_wnu_popup.plist ")
#os.remove("/usr/local/sbin/wnu")
#os.remove("/usr/local/sbin/wnu_popup")
#os.remove("~/.io_wnusleep")
#os.remove("~/.io_wnuup")
#os.remove("/usr/local/sbin/tor")
#os.remove("/usr/local/sbin/dnscrypt-proxy")
#os.remove("/usr/local/lib/liblzo2*")
#os.remove("~/Library/Services/WNU\ Switch.workflow/")
#unzip ../bin/BearExtender-Turbo-b8.zip  -d ../bin/
#zip = zipfile.ZipFile("../bin/BearExtender-Turbo-b8.zip")
#zip.extractall("../bin/")
#sudo ./installpkg ../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/Uninstall.pkg
#os.remove("../bin/RTLWlanU_MacOS10.6_MacOS10.11_Driver_1830.2.b17_1827.4.b22_DropDownMenu_5.0.2.b8/")
