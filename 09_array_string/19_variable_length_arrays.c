#include <stdio.h>

// Variable Length Arrays - VLA
// VLA ishlatish mumkin bo'lmagan joylarda dinamik xotira boshqaruvi (malloc, free) ishlatiladi
int main() {
    int n;
    printf("Massiv uzunligini kiriting: ");
    scanf("%d", &n);

    int arr[n]; // VLA
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Massiv elementlari: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
