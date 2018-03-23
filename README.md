## I/O WNU for 
Input/Output Wireless Network Utility

* Binary BearExtender-Turbo-b8.zip
* Utility Version: 5.0.7 (2018/02/23)
	- Fix tracking area of RF On/Off menu item.
* Driver Version: 1830.20.b14_1827.4.b29
	- Support 8188GU.
	- Add IO Wrapper.
	- Fix 8822BU endurance test failed.
	- NIC into ifconfig down after U2/U3 switching.
	- Revise for krack.
	- Fix Web page load failed.
	- Fix C9 endurance test issue.
	- Power Table customization.
	- Fix 8814AU hot-plug failed.
* Added StatusBarApp_mod_AirPort (interface AirPort)
* Added Create Network for Utils

##Lib's
* shc - 3.9.6
* c-blosc - 1.14.2
* bash - 4.4.19
* zstd - 1.3.4

##Software version's
* dnscrypt-proxy - 2.0.7
* openvpn - 2.4.5
* tor - 0.3.2.10
* speedtest - 2.0.0
* tshark - 2.4.5
* openssl - 1.0.2n
* bash - 4.4.18

##Functions

* Shortcuts for Settings Menu
* Agent status network
* Fix Device (displays the MAC address for the correct stop/start utility)
* Enable/Disable Service (check internet "8.8.8.8")
* Enable/Disable TOR (SOCK proxy)
* Enable/Disable DNSCrypt (Randomize config DNSCrypt & Auto update base DNSCrypt)
* Enable/Disable OpenVPN
* Switch Dark/Light mode for macOS
* Switch SSH Server
* Switch DNS 
    - Local
    - DHCP
    - Google
    - OpenDNS
    - Flush DNS Cache
* Show/Hide Utility
* Auto fix MAC address
* Button Status
    - MAC address
    - Public IP
    - Hostname
    - All services status
    - DNSCrypb base update time
* 
* Button Utils 
    - Set Hostname
    - ping
    - ping flood
    - traceroute
    - nslookup
    - telnet
    - ssh
    - open terminal
* SSH menu
    - new host
    - history last 10 host
    - clean history button
* Button Tshark (Dump and analyze network traffic) & set captures size
* Speedtest
    - Download/Upload & open url result

## Download

Prebuilt binaries are available from the
[releases section](https://github.com/envieid0c/io_wnu/releases).

##  Install
```
$ curl https://raw.githubusercontent.com/envieid0c/io_wnu/master/scripts/io_wnu_install.sh | bash
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

Copyright (C) 2018 Fedor Mankov(envieid0c) <envieidoc@gmail.com>

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
