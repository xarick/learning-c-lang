#include <stdio.h>

#define PRINT(x) printf("%s = %d\n", #x, x)

// #x - string ga o'zgartiriladi
// a##b - birlashtiriladi yani ab
int main() {
    int a = 5;
    int b = 10;
    
    PRINT(a);  // Natija: a = 5
    PRINT(b);  // Natija: b = 10
    PRINT(a + b);  // Natija: a + b = 15
    // printf("%s = %d\n", "a + b", a + b); // n: a + b = 15

    return 0;
}
