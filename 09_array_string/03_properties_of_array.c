#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Massiv hajmi: %lu bayt\n", sizeof(numbers));
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // struct Talaba {
    //     char ism[50];
    //     int yosh;
    // };
    // struct Talaba talabaMassivi[10];  // 10 ta talaba haqida ma'lumot

    int sonlar[3] = {1, 2, 3};
    printf("Birinchi element: %d\n", *sonlar);  // sonlar[0] ga teng

    // 2 o'lchamli massiv
    // int matritsa[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // Agar dastur davomida massiv hajmini o‘zgartirish kerak bo‘lsa
    int *dinamikMassiv = (int *)malloc(5 * sizeof(int));

    return 0;
}
