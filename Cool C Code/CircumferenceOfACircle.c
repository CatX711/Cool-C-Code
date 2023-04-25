#include <stdio.h>

int main(){

    const double PI = 3.14159; // its a const so it cannot be changed by anyone
    double radius;
    double circumference; // will be calculated and displayed
    double area;


    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    // equation to calculate radius or circle
    circumference = 2 * PI * radius; 

    // area calculation (pi * radius squared)
    area = PI * radius * radius;


    // print output
    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0; 
}