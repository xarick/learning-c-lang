#include <stdio.h>

int main() {
    int x = 257;    // 4 bayt
    char c = 'A';   // 1 bayt
    short s = 5;    // 2 bayt

    printf("int x: Manzil = %p, Qiymat = %d\n", (void*)&x, x);
    printf("char c: Manzil = %p, Qiymat = %c\n", (void*)&c, c);
    printf("short s: Manzil = %p, Qiymat = %d\n", (void*)&s, s);

    return 0;
}
