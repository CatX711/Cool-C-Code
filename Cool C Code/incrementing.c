#include <stdio.h>

int main(){

    // incrementing

    int x = 10;
    int z = 20;
    int y = 5;
    int j = 4;
    int b = 16;
    
    x = x + 2; // increment by 2
    // x+=2; <-- shortcut increment by 2 

    z = z - 3; // decrement by 3
    // x-=3; <-- shortcut decrement by 3

    y = y * 10; // times by 10
    // y*=10; <-- shortcut

    j = j % 2;
    // j%=2; <-- shortcut

    b = b / 4;
    // b/=4; <-- shortcut

    printf("%d, %d, %d, %d, %d", x, z, y, j, b);

    
    // OUTPUT:
    // 12, 17, 50, 0, 4


    return 0;
}