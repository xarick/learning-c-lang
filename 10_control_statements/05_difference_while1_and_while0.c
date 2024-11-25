#include <stdio.h>

int main() {
    while (1) {
        printf("Bu cheksiz sikl!\n");
        break; // Agar `break` bo'lmasa, cheksiz davom etadi
    }

    while (0) {
        printf("Bu hech qachon ko'rinmaydi!\n");
    }
    return 0;
}
