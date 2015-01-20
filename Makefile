# Makefile for user_programs

prefix=/usr/local
exec_prefix=/usr/local

CC = gcc
CFLAGS = -pg -O2 -Wall -Wno-implicit -Wmissing-prototypes -Wpedantic 
CPP = gcc -E
CPPFLAGS =  -I/usr/local/include
CXX = g++
CXXCPP = g++ -E
CXXFLAGS = -pg -O2 -Wall -Wpedantic -std=gnu++11 -fpermissive
LDFLAGS = -Xlinker -rpath -Xlinker /usr/local/lib
LDLIBS =  -L/usr/local/lib -liRRAM -lmpfr -lm -lgmp -lpthread
