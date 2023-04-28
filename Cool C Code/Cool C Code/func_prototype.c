#include <stdio.h>

// make sure to use function type at beginning of function prototype
void hello(char[], int); // function prototype
// if wrong arguments/ wrong amount of arguments are used
// this ensures that the program will not compile until fixed
// and it throws an error stating the problem


int main(){

    // function prototype 

    // what is it?
    // function declaration, w/o a body, before main()
    // ensures that calls to a function are made with the correct arguments


    char name[] = "Daniel";
    int age = 21;


    hello(name, age);
    // if code is: hello(name);
    // this error message is thrown:
    /*
    
    func_prototype.c:22:15: error: too few arguments to function call, expected 2, have 1
    hello(name);
    ~~~~~     ^
    func_prototype.c:3:6: note: 'hello' declared here
    void hello(char[], int); // function prototype
        ^
    1 error generated.
    
    */
   // without the function prototype, the program would get 
   // warnings, but still run. this breaks the program.
   // a function prototype ensures the program gets an error message
   // and that it doesnt compile

    return 0;
}


void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old.", age);
}