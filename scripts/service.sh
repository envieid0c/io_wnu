#!/bin/bash
# Copyright © 2016 Fedor Mankov envieid0c (envieidoc@gmail.com)
POPUP=/usr/local/sbin/io_wnu_popup

function service {
  ps aux | grep io_wnuup | grep bash | awk '{print $11}' > /tmp/io_service

  exec 6<&0
  exec < /tmp/io_service
  read a1

  if [ "$a1" != "bash" ]; then
      bash ~/.io_wnuup &
      "$POPUP" -title ' Service enabled' -message '' -timeout 3
      rm -rf /tmp/io_service
  else
      pkill -f ~/.io_wnuup &
      "$POPUP" -title ' Service disabled' -message '' -timeout 3
  fi
}

service
