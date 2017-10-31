#include "factorial.h"

/**
 *This function returns the factorial of a number
 *Factorial function inefficient for values after 20
 *@param n number to be computed
 *@return factorial of n
 */
unsigned long long int fact(int n) {
    unsigned long long int factorial = 1;

    for (int i=n;i>0;i--)
        factorial*=i;

    return factorial;
}
