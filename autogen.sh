#!/bin/sh

rm -rf config.guess config.sub ltmain.sh

autoreconf --install -v

if [ -z "$NOCONFIGURE" ]; then
  ./configure "$@"
fi
