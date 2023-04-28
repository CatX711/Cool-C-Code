#include <stdio.h>

double square(double x){
    
    double result = x * x;

    return result;

    // * shortened code:

    // get rid of result
    // instead put:
    
    // return x * x
}

/*

we need to list the data type of the function at
the beginning of it

void func_name() = no data type

if working with doubles

double func_name()

if working with integers

int func_name()

if working with chars

char func_name()


etc.

*/

int main(){

    double x = square(3.14);
    printf("%lf", x);

    return 0;
}