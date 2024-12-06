#include <stdio.h>
#include <stdlib.h>

// Taqqoslash funksiyasi
int comparator(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // Butun sonlarni taqqoslash
}

int main() {
    int arr[] = {42, 16, 23, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Massivni saralash
    qsort(arr, n, sizeof(int), comparator);

    // Saralangan massivni chiqarish
    printf("Saralangan massiv: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// // string ni saralash
// int comparator(const void *a, const void *b) {
//     return strcmp(*(const char **)a, *(const char **)b); // Stringlarni taqqoslash
// }

// int main() {
//     const char *arr[] = {"apple", "orange", "banana", "grape"};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Stringlarni saralash
//     qsort(arr, n, sizeof(const char *), comparator);

//     // Saralangan massivni chiqarish
//     printf("Saralangan massiv: ");
//     for (int i = 0; i < n; i++) {
//         printf("%s ", arr[i]);
//     }
//     return 0;
// }