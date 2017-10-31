CC = gcc
CFLAGS = -Wall -std=c99 -pedantic -g

default:
	$(CC) $(CFLAGS) src/cis3250-legacy-calculator.c src/functions.c src/conversions.c src/factorial.c src/matrices.c src/power.c -Iinclude -o bin/run

clean: rm bin/*