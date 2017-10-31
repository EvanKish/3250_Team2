/**
 * @file power.c
 * @description Functions to calculate powers
 * @author
 */

#include "power.h"

float power(float base, int exponent) {
    float result = 1;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}
