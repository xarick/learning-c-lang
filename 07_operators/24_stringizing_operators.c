#include <stdio.h>

// ishlamadi
// #define STRINGIZE(x) #x

// int main() {
//     printf("%s\n", STRINGIZE(Hello));  // Argumentni stringga aylantiradi.
//     return 0;
// }

#define CONCAT(a, b) a##b

int main() {
    int xy = 10;
    printf("%d\n", CONCAT(x, y));  // x va y birlashtiriladi va xy identifikatori hosil bo‘ladi.
    return 0;
}
