## WNU for 
Wireless Network Utility

* Binary BearExtender-Turbo-b8.zip
* Utility Version: 5.0.2.b8 (2016/05/25)
* Driver Version: 1830.2.b17_1827.4.b22
* Added StatusBarApp_mod_AirPort (interface AirPort)
* Added Create Network for Utils

## Download

Prebuilt binaries are available from the
[releases section](https://github.com/envieid0c/wnu/releases).

##  Install
```
$ ./scripts/wnu_install.sh
```
## Alternative 
```
$ cd ~ git clone https://github.com/envieid0c/wnu.git ; bash wnu/scripts/wnu_install.sh
```
## Update
```
$ cd ~/wnu/ ; git stash ; git pull ; scripts/wnu_install.sh
```
## Binding to a Keyboard Shortcut

With the service now saved we can navigate to the Keyboards Shortcuts tab within the System Preferences panel and locate the Service under ‘General’. All that is required now is for you to active the service using the checkbox and define a unique shortcut which will be used to call it. Similar to the Automator example following these instructions should result in a similar output to the screenshot below.
![Alt text](/img/img5.png?raw=true "")

## Screenshots

![Alt text](/img/img1.png?raw=true "") ![Alt text](/img/img2.png?raw=true "")

![Alt text](/img/img3.png?raw=true "") ![Alt text](/img/img4.png?raw=true "")

##Functions

- Shortcuts for Settings Menu
- Sleepwatcher
- Enable/Disable Service (check internet "8.8.8.8") - Default does not start
- Fix Device (displays the MAC address for the correct stop/start utility)
- Enable/Disable TOR (SOCK proxy) for interface

##  Uninstall
```
$ ./scripts/wnu_uninstall.sh
```

##Source code

This project is based on a fork of:
- https://github.com/vjeantet/alerter/releases
- http://www.bernhard-baehr.de

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
