#include <stdio.h>
#include <stdlib.h>

void dynamicArray() {
    int rows = 3, cols = 4;
    int *array;

    // Xotira ajratish
    array = (int *)malloc(rows * cols * sizeof(int));

    // Qiymatlarni kiritish
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(array + i * cols + j) = i * cols + j;
        }
    }

    // Qiymatlarni chiqarish
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(array + i * cols + j));
        }
        printf("\n");
    }

    // Xotirani bo‘shatish
    free(array);

    // Afzalliklar:
    // Xotirani ajratish va bo‘shatish oson.
    // Barcha elementlar ketma-ket joylashgan, kesh bilan ishlash tezligi yuqori.
    // Kamchiliklar:
    // Har bir satr uchun alohida ko‘rsatkichlar kerak emas, shuning uchun moslashuvchanlik biroz cheklangan.
}

// 1-usul
int main() {
    int rows = 3, cols = 4;
    int **array;

    // Satrlar uchun xotira ajratish
    array = (int **)malloc(rows * sizeof(int *));
    
    // Har bir satrning ustunlari uchun xotira ajratish
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    // Qiymatlarni kiritish
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j; // Masalan, indekslarni qo‘shamiz
        }
    }

    // Qiymatlarni chiqarish
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Xotirani bo‘shatish
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    printf("\n");
    dynamicArray();

    return 0;
}
// Afzalliklar:
// Har bir satr uchun xotira alohida ajratiladi, bu moslashuvchanlikni oshiradi.
// Kamchiliklar:
// Ajratilgan xotirani to‘g‘ri bo‘shatish talab qilinadi (har bir satr va asosiy massiv).
