#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;


    printf("\nFind the hypotenuse of a triangle.");
    printf("\n\nFirstly, enter side A: ");
    scanf("%lf", &A);

    printf("\nNow, enter side B: ");
    scanf("%lf", &B);    

    // calculate hypotenuse of triangle
    C = sqrt(A*A + B*B); // (a x a + b * b squared)

    printf("\n\nSide C: %lf", C);

    return 0;

}

