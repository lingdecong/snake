snake: src/main.o src/argv.o
	gcc -o snake src/main.o src/argv.o

main.o: src/main.c 
	gcc -c src/main.c

argv.o: src/argv.c src/argv.h
	gcc -c src/argv.c

