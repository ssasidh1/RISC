#
# Makefile
#
# Author:
# Copyright (c) 2022, Ashwin Kandheri Jayaraman (akandhe1@binghamton.edu), Srinidhi Sasidharan (ssasidh1@binghamton.edu)
# State University of New York at Binghamton
 
# Enables debug messages while compiling
COMPILE_DEBUG=@
VERSION=2.0

# Compile and Link flags, libraries
CC=$(CROSS_PREFIX)gcc
CFLAGS= -g -Wall -O0 -DVERSION=$(VERSION)
LDFLAGS=
LIBS=

PROGS= apex_sim

all: clean $(PROGS) 

# Add all object files to be linked in sequence
APEX_OBJS:=main.o

apex_sim: $(APEX_OBJS)
	$(CC) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(COMPILE_DEBUG)$(CC) $(CFLAGS) -c -o $@ $<
	$(COMPILE_DEBUG)echo "CC $<"

clean:
	rm -f *.o *.d *~ $(PROGS)