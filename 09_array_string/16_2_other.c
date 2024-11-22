#include <stdio.h>
#include <stdlib.h>

// Dinamik massivni qabul qiluvchi funksiya
// Afzalliklari:
// Katta massivlar uchun samarali bo‘ladi.
// Dinamik massivning o‘lchamlarini dastur ishlayotganda belgilash mumkin.
void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 4;
    int **array;

    // Dinamik massivni yaratish
    array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    // Qiymatlarni to‘ldirish
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j;
        }
    }

    // Funksiyaga dinamik massivni uzatish
    printArray(array, rows, cols);

    // Xotirani bo‘shatish
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
