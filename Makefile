CC = gcc
CFLAGS = -Wall -std=c99 -pedantic -g -Iinclude

default: bin/functions.o bin/conversions.o bin/factorial.o bin/matrices.o bin/power.o src/cis3250-legacy-calculator.c
	$(CC) $(CFLAGS) bin/functions.o bin/conversions.o bin/factorial.o bin/matrices.o bin/power.o src/cis3250-legacy-calculator.c -o bin/run

bin/functions.o: src/functions.c
	$(CC) $(CFLAGS) -c src/functions.c -o bin/functions.o

bin/conversions.o: src/conversions.c include/conversions.h
	$(CC) $(CFLAGS) -c src/conversions.c -o bin/conversions.o

bin/factorial.o: src/factorial.c include/factorial.h
	$(CC) $(CFLAGS) -c src/factorial.c -o bin/factorial.o

bin/matrices.o: src/matrices.c include/matrices.h
	$(CC) $(CFLAGS) -c src/matrices.c -o bin/matrices.o

bin/power.o: src/power.c include/power.h
	$(CC) $(CFLAGS) -c src/power.c -o bin/power.o

clean:
	rm bin/*
