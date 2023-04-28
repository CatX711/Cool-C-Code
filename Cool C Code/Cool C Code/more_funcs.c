#include <stdio.h>

void birthday(char name[], int age) { // parameters (defining name and age as birthday cannot see into main())
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}


int main() {

    char name[] = "Jeff";
    int age = 21;


    birthday(name, age); // arguments

    // arguments have to be in the same order as the parameters, as it would not work
    // i say this because we have name and age in that order, and in birthday()'s parameters
    // you could put any name for variable, eg x, you would just have to change the 
    // " "%s", name " to " "%c", x"
    // and it would still function as normal

    return 0;
}