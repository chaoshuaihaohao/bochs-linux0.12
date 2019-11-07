#!/bin/sh
dd if=Image of=a.img
bochs -f bochsrc.txt
