#include <stdio.h>

// Pointer yordamida sizeof ga o'xshash funksiya yaratish
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

int main() {
    int num = 10;
    double dbl = 20.5;

    // my_sizeof funksiyasidan foydalanish
    printf("int turining hajmi: %ld bayt\n", my_sizeof(num));
    printf("double turining hajmi: %ld bayt\n", my_sizeof(dbl));

    return 0;
}
