#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b; // Ko'tarish hisoblanadi
        a = a ^ b;         // Qo'shilishsiz yig'indi
        b = carry << 1;    // Ko'tarishni chapga surish
    }
    return a;
}

int main() {
    int x, y;
    printf("Birinchi sonni kiriting: ");
    scanf("%d", &x);
    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &y);

    int result = add(x, y);
    printf("Yig'indisi: %d\n", result);

    return 0;
}
