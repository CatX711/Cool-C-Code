#include <stdio.h>


// function using ternary operator

int findMax(int x, int y){
    /*
    if(x > y){
        return x;
    }
    else{
        return y;
    }
    */

    // ternary operator: 
    return (x > y) ? x : y; // does same as above
    // code explained
    // is x > y? if x > y, return x, else, return y
    //  ? = is, left of : is the value if true, right of it is the value if false

}


int main(){

    // ternary operator = shortcut to if/else when assigning/returning a value
    // ternary operator formula:
    
    // (condition) ? (value if true) : (value if false)


    // finds biggest number out of two nums
    int max = findMax(3, 4);

    printf("\nThe biggest number out of 3 and 4 is: %d\n\n", max);

    return 0;
}