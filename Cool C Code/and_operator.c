#include <stdio.h>
#include <stdbool.h> // if working with booleans (true/false), import this
#include <ctype.h> // add this header for toupper function

int main(){
    // logical operators = && (AND) checks if two conditions are true

    float temp = 25;
    char sunny;

    printf("\nWhat is the current temperature (in celsius)? ");
    scanf("%f", &temp); // add & before temp to pass the address of temp to scanf
    printf("Is it sunny outside? (Y or N) ");
    scanf(" %c", &sunny); // add space before %c to consume leading whitespace and prevent scanf from consuming any leftover newline character in the input buffer

    sunny = toupper(sunny); // convert sunny to uppercase

    if(temp >= 17 && temp <= 30 && sunny == 'Y'){ // if temp is between 16 and 31 and sunny is 'Y'
        printf("\nThe weather is good! Enjoy! :D");
    } else if(temp > 17 && sunny == 'N'){ // if temp is above 17 and sunny is 'N'
        printf("\nThe weather is bad! Stay inside!");
    } else if(temp > 30 && (sunny == 'Y' || sunny == 'N')){ // if temp is above 30 and sunny is either 'Y' or 'N'
        printf("\nThe weather is bad! Stay inside!");
    }
    else{ // otherwise
        printf("\nThe weather is bad! Stay inside!");
    }

    return 0; // indicate successful program termination
}
