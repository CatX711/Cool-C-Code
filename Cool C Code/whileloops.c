#include <stdio.h>
#include <string.h>

int main(){
    // while loop = repeats a section of code possibly unlimited times
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name? ");
    fgets(name, 25, stdin); // var we wanna change, followed by it's bite size, followed by the keyword "standard input"
    name[strlen(name) -1] = '\0'; // When you use the fgets function to read a string from the user, it includes the newline character ('\n') at the end of the string. This newline character is added by the function when the user presses the "Enter" key to submit their input.

    while(strlen(name) == 0){
        printf("You did not enter your name!");
        fgets(name, 25, stdin); 
        name[strlen(name) -1] = '\0'; // ! i STILL have no clue what this does        
    }

    printf("Hello %s", name);


    return 0;
}                               