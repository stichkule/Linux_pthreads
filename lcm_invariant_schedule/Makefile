INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS=
CFLAGS= -O0 -g $(INCLUDE_DIRS) $(CDEFS) -static -lm
LIBS= 

HFILES= 
CFILES= lcm_invariant_schedule.c

SRCS= ${HFILES} ${CFILES}
OBJS= ${CFILES:.c=.o}

all:	lcm_invariant_schedule

clean:
	-rm -f *.o *.d
	-rm -f lcm_invariant_schedule

lcm_invariant_schedule: lcm_invariant_schedule.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o -pthread

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<
