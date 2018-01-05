CFLAGS = -g3 -O0
LIBS = -lm
CC = gcc

all:	hmwk4_2 

hmwk4_2.o:	hmwk4_2.c
	$(CC) $(CFLAGS)	-c -o hmwk4_2.o hmwk4_2.c
hmwk4_2:	hmwk4_2.o
	$(CC) $(CFLAGS)	$(LIBS)	-o hmwk4_2 hmwk4_2.o

clean:
	rm -f *.o hmwk4_2

