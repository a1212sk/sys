#Makefile for printup

CC = gcc
CLEAN = rm -f
PROGNAME = printup

$(PROGNAME): print_up.o main.o
	$(CC) -o $@ $^

print_up.o: print_up.c 
	$(CC) -c $^

main.o: main.c
	$(CC) -c $^

clean:
	$(CLEAN) *.o
	$(CLEAN) $(PROGNAME)