#!/bin/bash
wget -P /tmp/ https://raw.github.com/Methieg/alx-low_level_programming/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
