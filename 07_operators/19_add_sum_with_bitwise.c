#include <stdio.h>

int yigindi(int a, int b) {
    while (b != 0) {
        int qoshimcha = a ^ b;          // Qo‘shimcha qiymat
        int kotarma = (a & b) << 1;     // Ko‘tarma qiymat

        a = qoshimcha;   // Yig‘indini qo‘shimcha qiymatga o‘tkazamiz
        b = kotarma;     // Ko‘tarma qiymatini qayta ishlaymiz
    }
    return a;
}

int main() {
    int son1 = 15, son2 = 27;
    printf("Yigindi: %d\n", yigindi(son1, son2));  // Natija: 42
    return 0;
}
