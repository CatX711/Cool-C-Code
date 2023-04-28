#include <stdio.h>
#include <ctype.h>

int main(){

    char unit; // one thing i noticed is: because its a char, if a user types in, for example "sjbdiaud", it will only read the first char of that, as it is not a character array
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    // makes unit uppercase, so if "c" is typed, it will be turned into "C" 
    //and be accepted by program
    unit = toupper(unit); 

    if(unit == 'C'){ // use '' for if statements and such 
        printf("\nThe temp is currently in Celsius.\n\n");
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);

        temp = (temp * 9 / 5) + 32; // calc for converting Celsius to Fahrenheit
        printf("\nThe temp in Fahrenheit is: %.1f degrees.", temp);
    }
    else if(unit == 'F'){
        printf("\nThe temp is currently in Fahrenheit.\n\n");
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5) / 9; // calc for converting Fahrenheit to Celsius
        printf("\nThe temp in Celsius is: %.1f degrees.", temp);
    }
    else{ // if user did not type c or f
        printf("\n %c is not a valid unit of measurement!", unit);
    }

    return 0;
}