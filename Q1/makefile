CFLAGS = -g3 -O0
LIBS = -lm
CC = gcc

all:	hmwk4_test hmwk4

hmwk4_test.o:	hmwk4_test.c
	$(CC) $(CFLAGS)	-c -o hmwk4_test.o hmwk4_test.c
hmwk4_test:	hmwk4_test.o
	$(CC) $(CFLAGS)	$(LIBS)	-o hmwk4_test hmwk4_test.o
hmwk4.o:	hmwk4.c
	$(CC) $(CFLAGS)	-c -o hmwk4.o hmwk4.c
hmwk4:		hmwk4.o
	$(CC) $(CFLAGS)	$(LIBS)	-o hmwk4 hmwk4.o

clean:
	rm -f *.o hmwk4_text hmwk4

