#include <stdio.h>

int main(){

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication) 
    // / (division)
    // % (modulus) remainder of division. how to find if num is even or odd: printf("%call_method % 2", varname); eg printf("%d % 2", num)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;
    int b = 7;
    int d = 4;

    /* will be truncated, as the result is a float, so because we put int, the decimal numbers will be lost
    int z = x / y;  output: 2

    printf("%d\n", z)


    Here is the fix:

    */

    float z = x / (float) y; // converts y to a float

    // NOTE: if performing division with ints, you may have to convert your divisor into a float/double 

    printf("%.f\n", z);


    int h = b % d;

    printf("%.1f\n\n", (double) h);


    // increment and decrement:

    x++; // incremented by 1
    y--; // decremented by 1

    printf("X when incremented by 1 is: %d\n", x); // output: 6
    printf("Y when decremented by 1 is: %d\n", y); // output: 1


    // code is continued in incrementing.c

    return 0;
}