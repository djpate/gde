#!/bin/bash
gcc -c gpe.c -fPIC `pkg-config --cflags geany`
gcc gpe.o -o gpe.so -shared `pkg-config --libs geany`
sudo cp gpe.so /usr/lib/geany

