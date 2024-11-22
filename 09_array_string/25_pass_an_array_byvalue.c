#include <stdio.h>
#include <string.h>

void modifyArray(int arr[], int size) {
    int copy[size];
    // Massivni qiymat bo‘yicha nusxalash
    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }

    // Nusxalangan massivni o‘zgartirish
    for (int i = 0; i < size; i++) {
        copy[i] *= 2; // Har bir elementni 2 ga ko‘paytirish
    }

    printf("Modified copy inside function: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
}

void modifyDynamicArray(int *arr, int size) {
    int *copy = malloc(size * sizeof(int));
    if (copy == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Massivni nusxalash
    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }

    // Nusxalangan massivni o‘zgartirish
    for (int i = 0; i < size; i++) {
        copy[i] += 10;
    }

    printf("Modified copy inside function: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");

    free(copy);
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);

    printf("Original array before function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    modifyArray(originalArray, size);

    // Funksiyaga murojaat qilish
    // modifyDynamicArray(originalArray, size);

    printf("Original array after function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    return 0;
}
