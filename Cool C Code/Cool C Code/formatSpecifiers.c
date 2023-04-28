#include <stdio.h>

// format specifier = %
// it defines and formats a type of data o be displayed
// %s = string (array of characters)
// %f = float 
// %lf = double
// %d = integer

// %.1 = decimal precision
// %1 = minimum field width
// %- = left align

int main(){
    float item1 = 5.57;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1); // the %.2f changes the output from Item 1: $5.570000 to $5.57
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    /*
    
    the - in %-8.2f left aligns the numbers. so it changes this:

    Item 1: $    5.57
    Item 2: $   10.00
    Item 3: $  100.99

    into this:

    Item 1: $5.57    
    Item 2: $10.00   
    Item 3: $100.99  
    
    */

   
    return 0;
}