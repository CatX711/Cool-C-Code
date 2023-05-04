#include <stdio.h>

int main(){

    // for loop = repeats a section of code a limited amount of times

    for(int i = 1; i <= 10; i++){ // we start with an index, (shortened to i), give it a condition (in this case repeat until i = 10, increment it by 1 after each iteration 
        printf("%d\n", i);
        // output:
        /*
        
        1
        2
        3
        4
        5
        6
        7
        8
        9
        10
        */
    }
    printf("\n\n\n");

    for(int i = 1; i <= 10; i+=2){ // increments by 2 instead of 1
        printf("%d\n", i);
    }
    printf("\n\n\n");

    for(int i = 10; i >= 1; i--){ // counts down from 10
        printf("%d\n", i);
    }
    printf("\n\n\n");    

    for(int i = 2; i <= 10; i+=2){ // counts to 10 by 2
        printf("%d\n", i); 
    }
    printf("\n\n\n");

    return 0;
}