INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS= -std=c99
CFLAGS= -O3 -g $(INCLUDE_DIRS) $(CDEFS)
LIBS= -lpthread -lrt
LIBS_MATH = -lm

PRODUCT=posix_clock analyze_jitter

HFILES=
CFILES= posix_clock.c

SRCS= ${HFILES} ${CFILES}
OBJS= ${CFILES:.c=.o}

all:	${PRODUCT}

clean:
	-rm -f *.o *.NEW *~ *.d *.txt
	-rm -f ${PRODUCT} ${GARBAGE}

posix_clock:	posix_clock.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ posix_clock.o $(LIBS) $(CDEFS)

analyze_jitter:	analyze_jitter.o
	$(CC) -o $@ analyze_jitter.o $(LIBS_MATH)

depend:

.c.o:
	$(CC) -MD $(CFLAGS) -c $<
