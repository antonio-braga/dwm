
#!/bin/bash

xbacklight -dec 10

LIGHT=$(xbacklight | cut -s -d"." -f1)

notify-send -t 925 "Brightness: $LIGHT%"
