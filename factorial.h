#include <stdio.h>
#include <stdint.h>

    unsigned long long int fact(int n){/*Factorial function inefficient for values after 20*/
    unsigned long long int fact;
    int i;
    fact=1;

    for(i=n;i>0;i--){
        fact*=i;
    }
    return fact;
    }

