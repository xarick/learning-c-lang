#include <stdlib.h>

int main() {
    // size_t n = 10; // Elementlar soni
    // int *arr = (int *)malloc(n * sizeof(int));
    // if (arr == NULL) {
    //     printf("xotira ajratishda xatolik\n");
    //     return 1;
    // }
    // free(arr);

    int array[5] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(array);
    printf("The size of the array is: %lu\n", size); // J. 20 (bayt)

    // zu - size_t unsigned 
    long double a = 5;
    size_t size_2 = sizeof(a);
    printf("Hajm: %zu bayt\n", size_2);

    return 0;
}
