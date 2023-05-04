// using the preprocessor stuff to make 
// a goofy version of c lmao

#include <stdio.h>

// essentials
#define START int main() // starts program
#define OUTPUT(...) printf(__VA_ARGS__) // printf
#define END return 0 // return keyword
#define INPUT(type, var) scanf("%" #type, &var) // use the var names, not % followed by the var type, as it will not work
#define SWITCHF(expression) \
    switch (expression) { \
        case

#define CASE(value) \
        value:

#define DEFAULT \
        default:

#define END_SWITCH \
    }

#define EXIT break    

// mathematic operators
#define ADD(...) \
    ({ \
        int result = 0; \
        for (int i = 0; i < sizeof((int[]){__VA_ARGS__})/sizeof(int); i++) { \
            result += ((int[]){__VA_ARGS__})[i]; \
        } \
        result; \
    })
#define MULTIPLY(...) \
    ({ \
        int result = 1; \
        for (int i = 0; i < sizeof((int[]){__VA_ARGS__})/sizeof(int); i++) { \
            result *= ((int[]){__VA_ARGS__})[i]; \
        } \
        result; \
    })

/*
#define ADD(...) \
    ({ \
        int result = 0; \
        for (int i = 0; i < sizeof((int[]){__VA_ARGS__})/sizeof(int); i++) { \
            result += ((int[]){__VA_ARGS__})[i]; \
        } \
        printf("The sum is: "); \
        printf(#__VA_ARGS__); \
        printf(" = "); \
        printf("%d", result); \
        result; \
    })
#define MULTIPLY(...) \
    ({ \
        int result = 1; \
        for (int i = 0; i < sizeof((int[]){__VA_ARGS__})/sizeof(int); i++) { \
            result *= ((int[]){__VA_ARGS__})[i]; \
        } \
        printf("The product is: "); \
        printf(#__VA_ARGS__); \
        printf(" = "); \
        printf("%d", result); \
        result; \
    })
*/

#define DIVIDE(x, y) ((y != 0) ? (x / y) : 0)
#define SQUARE(x) ((x) * (x))

// ease of life 
#define NEWLINE_LONG printf("\n\n") // guaranteed prints a new line if one newline isnt working
#define NEWLINE printf("\n")


START {
    OUTPUT("\nHello, world");
    NEWLINE_LONG;
    
    int sum = ADD(1, 2, 3, 4);
    OUTPUT("The sum is: %d", sum);
    NEWLINE_LONG;
    
    int product = MULTIPLY(1, 2, 3, 4);
    OUTPUT("The product is: %d", product);
    NEWLINE_LONG;

    char name[] = "";

    OUTPUT("Hello there, what is your name? ");
    INPUT(s, name);
    NEWLINE;
    OUTPUT("Hey there,", name, "!");
    

    END;
}

// input is broken lmao
