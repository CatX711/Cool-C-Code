#include <stdio.h>

int main(){

    // 25 is max bites allowed, if exceeded buffer overflow occurs
    char name[25] = "";
    int age;

    printf("Hey there! What's your name?\n");
    scanf("%s", name);

    printf("How old are you?\n");
    scanf("%d", &age); // if using a string, the & is not needed
    // WARNING: 
    // do not use "\n" in a scanf!


    printf("\n\n");
    printf("Nice to meet you, %s!\n", name);
    printf("You are %d years old!\n", age);

    // * Note:
    /*  
    
    scanf reads input up to the first whitespace (space)
    so if using for example a name and a surname, use
    "fgets" function

    eg:

    fgets(name, 25, stdin); <-- 25 chars matches "char = name[25]" 
    requirements. stdin is "standard input"

    using fgets lets you read user input

    however, it puts the text after the variable on the next line.
    to fix this, add "#include <string.h>" to the top of the program

    change code to this:

    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    this should get rid of the problem :D


    however, i know i am not going to use whitespace, so i will keep this code
    as "scanf();" for now :)
    */
    return 0;
}