CC=gcc
CCFLAGS=-Wall
MAKE=make
CLEAN=rm -f
PROGNAME=upver
OBJECTS=readver/readver.o toup/toup.o

$(PROGNAME): make-readver make-toup upver.o
	$(CC) $(CCFLAGS) -o $(PROGNAME) $(OBJECTS) upver.o

upver.o: upver.c
	$(CC) $(CCFLAGS) -c -Ireadver -Itoup $^

make-readver:
	$(MAKE) -C readver readver.o

make-toup:
	$(MAKE) -C toup toup.o

clean:
	$(CLEAN) *.o $(PROGNAME)
	$(MAKE) -C readver clean
	$(MAKE) -C toup clean
