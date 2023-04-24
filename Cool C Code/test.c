#include <stdio.h>
#include <stdbool.h> // lets you have boolians in your code

//                                                                                                                                                                                                      //


int main(){  // ! always start a c program with "int main()""
    printf("Hello, world!\n");
    printf("I like pizza, it's really good!\n");

    // the tab escape sequence (\t)
    // creates even spacing between strings
    printf("Hey! Look at this cool thing I want to show you!\n 1\t2\t3\t4\t5\t6\n 7\t8\t9"); // there's a space before seven because for some reason it didnt align properly, but with the space it does

    /* 

    Output:

    1	2	3	4	5	6
    7	8	9

    */
    printf("\n");
    printf("\n");
    printf("\"Alcohol sucks\" - Abraham Lincoln, probably.\n");
    // normally using "" in your printf for quotes would affect the code, however, using the \ escape character it is allowed.


    // Data Types:



    // Variables 

    int x; // declaration of integer
    x = 123; // initialization
    int y = 321; // declaration + initialization

    int age = 21; // integer (whole number)
    float gpa = 2.06; // floating point number (decimal point nums)
    char grade = 'C'; // stores single character, always use single quotes for chars
    char name[] = "Bro"; // c doesn't have strings, so instead, we make an array of characters
    char f = 100; // this can be used for numbers from -128 to +127, AND converting numbers into asci characters. And, unsigned chars (e.g "unsigned char g = 203") can hold numbers from 0 - +255, effectively doubling the positive number range (but no negative nums).

                                                                                    /*
                                                                                    For example
                                                                                    
                                                                                    printf("%d\n", f); <-- output: 100

                                                                                    OR

                                                                                    printf("%c\n", f); <-- output: d

                                                                                    */


    printf("\n");
    printf("Hello, %s!\n", name); // %s is used for character arrays (so essentially strings) 
    printf("You are %d years old.", age); // %d means decimal
    printf("Your average grade is %c\n", grade); // %c is used for chars (not character arrays which are really just strings)
    printf("Your GPA is %f\n\n", gpa); // %f is used for floating point nums, of course


    // Floats and Doubles
    
    float c = 3.141592653589793;  // <-- 4 bytes (32 bits of precision) 6 - 7  digits. calling method: %f
    double d = 3.141592653589793; // <-- 8 bytes (64 bits of precision) 15 - 16 digits. calling method %lf
    
    // float number
    printf("%f\n", c); // printf("%0.15f\n", c); <-- lets there be 15 digits on the end of the num

    // double nums
    printf("%lf\n", d);

    /*
    
    When i say double has more accuracy, i mean it.
    Let's say that with out float number, we told it to go for another 15 extra digits. 
    After around 6 digits, the accuracy would just disappear. 
    However, with the double number, it would be perfectly accurate for those extra 15 digits
    

    Float num output:
    3.141592741012573

    (this is obviously not as accurate)
    
    Double num output:
    3.141592653589793

    (this is a lot more precise accurate)
    */

    // Booleans:

    bool e = true; // 1 byte of memory, value can be true or false. call it with %d

    printf("%d\n", e); // 1 corresponds to true, 0 corresponds to false



    // More stuff about Ints (short ints and unsigned short ints)

    // also, you dont need the "int" in "short int" for it to function.
    short int h = 32767; // 2 bytes of memory (-32,768 to +32,767) use %d to display it
    unsigned short int i = 65535; // 2 bytes of memory (0 to +65,535) use %d to display it

    // Normal Ints 

    int j = 21221314; // 4 bytes memory (-2,147,483,684 to +2,147,483,647) call with %d
    unsigned int k = 43721892; // like unsigned chars but the int version. 4 bytes memory (0 to +4,294,967,295) call with %u

    // Biggest Ints possible

    long long int bigI = 9923372075807; // ! 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int bigH = 188929281293791U;  // ! biggest possible integer !EVER! (0 to +18 quintillion) %llu
    // without the U at the end of the code, we get a warning message for the number being unnecessarily big, however, when we add the U to the end of the code, the warning goes away


    return 0; // if you get 0, the code was successful. the alternative, 1, means there was an error in the code 
}