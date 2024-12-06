#include <stdio.h>

// void printNumbers(int n) {
//     if (n > 0 && printf("%d ", n) && printNumbers(n - 1)) {
//         // Nuqta-vergul ishlatilmayapti
//     }
// }

// int main() {
//     int N;
//     printf("N ni kiriting: ");
//     scanf("%d", &N); // Foydalanuvchidan N ni olish
//     printNumbers(N); // Funksiyani chaqirish
//     return 0;
// }

#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printf("%d ", n); // Sonni chiqarish
        printNumbers(n - 1); // Rekursiv chaqiruv
    }
}

int main() {
    int N;
    printf("N ni kiriting: ");
    if (scanf("%d", &N)) { // Foydalanuvchidan N ni olish
        printNumbers(N); // Funksiyani chaqirish
    }
    return 0;
}
