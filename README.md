## I/O WNU for 
Input/Output Wireless Network Utility

* Binary BearExtender-Turbo-b8.zip
* Utility Version: 5.0.2.b8 (2016/05/25)
* Driver Version: 1830.2.b17_1827.4.b22
* Added StatusBarApp_mod_AirPort (interface AirPort)
* Added Create Network for Utils

##Functions

* Shortcuts for Settings Menu
* Sleepwatcher
* Fix Device (displays the MAC address for the correct stop/start utility)
* Enable/Disable Service (check internet "8.8.8.8") - Default does not start
* Enable/Disable TOR (SOCK proxy)
* Enable/Disable DNSCrypt
* Enable/Disable OpenVPN
* Show/Hide Utility

## Download

Prebuilt binaries are available from the
[releases section](https://github.com/envieid0c/io_wnu/releases).

##  Install
```
$ ./scripts/io_wnu_install.sh
```
## Alternative 
```
$ cd ~ git clone https://github.com/envieid0c/io_wnu.git ; bash io_wnu/scripts/io_wnu_install.sh
```
## Update
```
$ cd ~/io_wnu/ ; git stash ; git pull ; scripts/io_wnu_install.sh
```
## Openvpn config
- download config http://vpngate.net
- rename file to config.ovpn
- replace in your home directory ~/config.ovpn 

## Binding to a Keyboard Shortcut

With the service now saved we can navigate to the Keyboards Shortcuts tab within the System Preferences panel and locate the Service under ‘General’. All that is required now is for you to active the service using the checkbox and define a unique shortcut which will be used to call it. Similar to the Automator example following these instructions should result in a similar output to the screenshot below.
![Alt text](/img/img5.png?raw=true "")

## Bypass Tor using Network Proxies Preferences

If you know you never want to use Tor for specific domains or websites, you can enter them in a comma-separated list back where you set up the SOCKS proxy. For instance, if you never want to use Tor to get to Wikipedia, enter , *.wikipedia.org into the “Bypass proxy settings for these Hosts & Domains:” text box, as shown below:
![Alt text](/img/img6.png?raw=true "")

You can also use this method to bypass Tor for multi-media sites like YouTube or Pandora Internet Radio, which are often frustratingly slow when proxied. Just be aware that any time you bypass Tor, the server you’re connecting to gets additional information about you from your IP address, and so on, so use this sparingly.

Anyway, this configuration will always bypass Tor for accessing any Wikipedia.org domain name regardless of what application initiated the connection. For instance, I monitor my Wikipedia watchlist using RSS feeds in Mail.app, but I read and edit Wikipedia in my Web browser

Since there’s no issue reading Wikipedia over Tor, only editing, using this configuration isn’t as private as it could be. I’m leaking information to Wikipedia about my whereabouts even when I’m just reading their articles. That’s why I don’t use this configuration, opting instead for a Web browser proxy manager that lets me bypass Tor only when I’m making an edit.


## Screenshots
![Alt text](/img/info.png?raw=true "")

##  Uninstall
```
$ ./scripts/io_wnu_uninstall.sh
```

##Source code

This project is based on a fork of:
- https://github.com/vjeantet/alerter/releases
- http://www.bernhard-baehr.de
- https://dnscrypt.org (config - https://dns.d0wn.biz "Russia")

## License

All the works are available under the MIT license.

Copyright (C) 2016 Fedor Mankov(envieid0c) <envieidoc@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
