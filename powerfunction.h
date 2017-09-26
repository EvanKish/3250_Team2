#include <stdio.h>

double powerfn(double x,int n){
int i;
double result=1;

for(i=1;i<=n;i++){
    result*=x;
}
return result;
}

