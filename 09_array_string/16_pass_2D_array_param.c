#include <stdio.h>

// 2D massivni qabul qiluvchi funksiya
void printArray(int arr[3][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// with pointer
// Afzalliklari:
// Ustun o‘lchamini aniq belgilash bilan qiyinchilik bo‘lmaydi.
// Pointer orqali massivni boshqarish osonlashadi.
void printArrayPointer(int (*arr)[4], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Bir o‘lchamli massiv sifatida uzatilgan 2D massiv
// Bitta xotira blokida joylashgan 2D massivni bir o‘lchamli massiv sifatida uzatish ham mumkin.
void printArray(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Funksiyaga massivni uzatish
    printArray(array, 3, 4);

    // printArrayPointer(array, 3);

    // printArray((int *)array, 3, 4);

    return 0;
}
