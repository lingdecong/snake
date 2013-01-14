all:snake

# Which compiler
CC = gcc

#Option for development
CFLAGS = -g -Wall -ansi

#Option for release
#CFLAGS = -O -Wall -ansi


snake: src/main.o src/argv.o
	$(CC) $(CFLAGS) -o snake src/main.o src/argv.o

main.o: src/main.c 
	$(CC) $(CFLAGS) -c src/main.c

argv.o: src/argv.c src/argv.h
	$(CC) $(CFLAGS) -c src/argv.c

