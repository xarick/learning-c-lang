// void* realloc(void* ptr, size_t new_size);#include <stdio.h>
#include <stdlib.h>

int main() {
    // 5 ta elementdan iborat xotira ajratamiz
    int* arr = (int*) malloc(5 * sizeof(int));  

    // Agar xotira ajratishda xatolik yuz bermasa, massivga ma'lumot kiritamiz
    if (arr == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi!\n");
        return 1;  // Dasturdan chiqish
    }

    // Massivga dastlabki 5 elementni kiritamiz
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;  // 1, 2, 3, 4, 5
    }

    printf("Dastlabki massiv:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Massivning hajmini 10 ga kengaytiramiz
    arr = (int*) realloc(arr, 10 * sizeof(int));  

    // Agar xotira kengaytirilsa, yangi elementlarni kiritamiz
    if (arr == NULL) {
        printf("Xotira kengaytirishda xatolik yuz berdi!\n");
        return 1;  // Dasturdan chiqish
    }

    // Yangi 5 ta elementni qo'shamiz
    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;  // 6, 7, 8, 9, 10
    }

    printf("Kengaytirilgan massiv:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Xotirani bo'shatamiz
    free(arr);

    return 0;
}
