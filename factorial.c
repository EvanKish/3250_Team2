/**
 * @file factorial.c
 * @description Functions to calculate factorials
 * @author
 */

#include <stdio.h>
#include <stdint.h>
#include "factorial.h"

unsigned long long int fact(int n) {
	unsigned long long int fact = 1;
	int i;

	for(i = n; i > 0; i--) {
	    fact *= i;
	}

	return fact;
}
