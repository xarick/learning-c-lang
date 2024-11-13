#include <stdio.h>

typedef unsigned int uint;  // uint endi unsigned int turiga teng
typedef int* IntPtr;  // IntPtr endi int turidagi pointerga teng

int main() {
    uint x = 10;  // uint unsigned int turini anglatadi
    IntPtr ptr = &x;  // IntPtr int* pointerga teng

    printf("%u\n", x);  // 10
    printf("%p\n", ptr);  // ptr manzili
    return 0;
}

// Xulosa:
// typedef o'zgaruvchilar va turlarni oson va tushunarli nomlar bilan yaratish uchun ishlatiladi, bu esa dasturdagi kodni o'qish va tushunishni osonlashtiradi.
// #define esa doimiy qiymatlar va makrolar yaratish uchun ishlatiladi va kodni kompilyatsiya qilishdan oldin o'zgartirishlarni amalga oshiradi.
