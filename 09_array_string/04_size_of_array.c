#include <stdio.h>

// XATO
// Funksiyaga massiv uzatilganda, massiv avtomatik ravishda ko‘rsatkichga (pointer) aylantiriladi
// void funksiya(int massiv[]) {
//     printf("Massiv hajmi: %lu\n", sizeof(massiv));
// }

// int main() {
//     int sonlar[5] = {1, 2, 3, 4, 5};
//     printf("Asl massiv hajmi: %lu\n", sizeof(sonlar));  // Asl hajmi
//     funksiya(sonlar);  // Funksiya ichida noto‘g‘ri hajm
//     return 0;
// }

// TO'G'RI
void funksiya(int massiv[], int uzunlik) {
    printf("Massiv hajmi: %d element\n", uzunlik);
}

int main() {
    int sonlar[5] = {1, 2, 3, 4, 5};
    funksiya(sonlar, sizeof(sonlar) / sizeof(sonlar[0]));  // Hajmni hisoblash
    return 0;
}

// #define HAJMI 5
// int sonlar[HAJMI] = {1, 2, 3, 4, 5};

// #define MASSIV_HAJMI(x) (sizeof(x) / sizeof((x)[0]))
//  int sonlar[5] = {1, 2, 3, 4, 5};
//     printf("Massiv hajmi: %lu element\n", MASSIV_HAJMI(sonlar));
