#include <stdio.h>

// Rekursiv funksiya
void printNumbers(int n) {
    if (n > 100) { // Chiqish sharti
        return;
    }
    printf("%d ", n); // Joriy sonni chiqarish
    printNumbers(n + 1); // Keyingi son uchun funksiya chaqiruvi
}

int main() {
    printNumbers(1); // Funksiyani 1-dan boshlab chaqirish
    return 0;
}
