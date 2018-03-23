#!/bin/bash
# Copyright © 2018 Fedor Mankov envieid0c (envieidoc@gmail.com)

function git_clone() {
    rm -rf /tmp/io_wnu
    mkdir -p /tmp/io_wnu
    cd $TMP_PATCH;
    git clone https://github.com/envieid0c/io_wnu.git /tmp/io_wnu
    cd /tmp/io_wnu
    bash /tmp/io_wnu/scripts/io_wnu_install.command
}

git_clone
