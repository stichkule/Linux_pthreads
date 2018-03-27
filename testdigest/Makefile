INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS=
CFLAGS= -O0 -g $(INCLUDE_DIRS) $(CDEFS) -lm
LIBS= 

HFILES= 
CFILES= testdigest.c

SRCS= ${HFILES} ${CFILES}
OBJS= ${CFILES:.c=.o}

all:	testdigest

clean:
	-rm -f *.o *.d
	-rm -f testdigest

testdigest: testdigest.o
	$(CC) $(LDFLAGS) $(CFLAGS) md5.c -o $@ $@.o -pthread

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<
