#include <stdio.h>

int main() {
    int a = 5, b = 10, c;

    c = (a += 2, b += 3, a + b);  // barcha ifodalar ketma-ket bajariladi
    printf("c: %d\n", c);  // Natija: c: 20

    // int a = 5;
    // int b = 10;
    // int c = 15;
    // int result = a = b = c;   // O‘ngdan chapga hisoblanadi
    // printf("Natija: %d\n", result);   // Natija: 15

    // int *ptr;
    // printf("Ko'rsatkich hajmi: %zu bayt\n", sizeof(ptr));
    // bu tizimga bog'liq 32-bit tizimda 4 bayt, 64-bit tizimda 8 bayt

    return 0;
}
