#include <stdio.h>

// int main() {
//     int n;
//     printf("Massiv o‘lchamini kiriting: ");
//     scanf("%d", &n);

//     int massiv[n];

//     for (int i = 0; i < n; i++) {
//         massiv[i] = i + 1;
//     }

//     printf("Massiv elementlari: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", massiv[i]);
//     }

//     return 0;
// }

void massivni_toldir(int n, int massiv[]) {
    for (int i = 0; i < n; i++) {
        massiv[i] = (i + 1) * 2;  // Elementlarni 2 baravar ko‘paytirib berish
    }
}

int main() {
    int n;
    printf("Massiv o‘lchamini kiriting: ");
    scanf("%d", &n);

    int massiv[n];

    massivni_toldir(n, massiv);

    printf("Massiv elementlari: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", massiv[i]);
    }

    return 0;
}
