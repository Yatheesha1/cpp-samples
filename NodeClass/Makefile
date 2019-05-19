PROG =mytest
TARGET_EXEC ?= a.out
BUILD_DIR ?= ./build
SRC_DIRS ?= ./src
CC = g++
CPPFLAGS = -g -Wall# -I/headerfiles
LDFLAGS = -L/usr/class/cs193/lib #-lnodeclass
OBJS =mytesting.o nodeclass.o
$(BUILD_DIR)/$(PROG) : $(OBJS)        
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
$(BUILD_DIR)/mytesting.o :
	$(CC) $(CPPFLAGS) -c mytesting.cpp
$(BUILD_DIR)/nodeclass.o : nodeclass.h
	$(CC) $(CPPFLAGS) -c nodeclass.cpp
clean:
	rm -f core $(PROG) $(OBJS)