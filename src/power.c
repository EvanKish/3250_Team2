/**
 * @file power.c
 * @description Functions to calculate powers
 * @author
 */

#include "power.h"

double power(double base, int exponent) {
    double result = 1;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}
