// using the preprocessor stuff to make 
// a goofy version of c lmao

#include <stdio.h>

// essentials
#define START int main() // starts program
#define OUTPUT(...) printf(__VA_ARGS__) // printf
#define EXIT return 0 // return keyword

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
#define NEWLINE printf("\n\n") // prints a new line

// other things
#define END break

START {
    OUTPUT("\nHello, world");
    NEWLINE;
    
    int sum = ADD(1, 2, 3, 4);
    OUTPUT("The sum is: %d", sum);
    NEWLINE;
    
    int product = MULTIPLY(1, 2, 3, 4);
    OUTPUT("The product is: %d", product);
    NEWLINE;
    
    EXIT;
}
