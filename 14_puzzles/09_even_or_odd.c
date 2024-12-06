#include <stdio.h>

int main() {
    int num = 7; // Test uchun son

    // Massivni tuzamiz
    const char *result[] = {"Even", "Odd"};

    // Modulus operatori bilan aniqlash
    printf("%s\n", result[num % 2]);

    // Yoki bitwise operator bilan aniqlash
    printf("%s\n", result[num & 1]);

    return 0;
}
