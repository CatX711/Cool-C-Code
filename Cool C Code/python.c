#include <stdio.h>

// random python-like macros
// all written by me lol

// printf without the need for \n
#define print(...) printf(__VA_ARGS__); printf("\n");

// list_comprehension
#define list_comprehension(var, start, end, expr) \
    for (int var = (start); var < (end); var++) \
        {expr;}

// range
#define range(start, end, step) \
    for (int i = (start); i < (end); i += (step))

// if elif and else, also using indentation

#define if(condition) if (condition) {
#define elif(condition) } else if (condition) {
#define else } else {
#define endif }




#define python int main()

#define end return 0



python{

    int hey = 5;

    // OH GOD IT ACTUALLY WORKS
    if(hey == 5)
        print("Test");
    endif;    
    // INDENTATION REALLY WORKS   
    // AAAAAAAAAAAA 

    print("Hello, world!");
    print("Wow, this is weird. I don't need '\\n' or printf anymore!");

    end;
}
