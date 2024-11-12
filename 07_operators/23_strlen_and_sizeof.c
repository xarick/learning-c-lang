#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("strlen(str): %zu\n", strlen(str));  // Qator uzunligi: 5 (null belgisini hisobga olmaydi)
    printf("sizeof(str): %zu\n", sizeof(str));  // Massiv uzunligi: 6 (5 belgi + null belgisi)
    return 0;
}

// strlen() null bilan tugatilgan qatorning haqiqiy uzunligini aniqlash uchun ishlatiladi.
// sizeof esa ma’lumot turining hajmini aniqlash uchun ishlatiladi va qatorlarda null belgisini ham hisobga oladi.
