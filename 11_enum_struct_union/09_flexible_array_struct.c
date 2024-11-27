#include <stdio.h>
#include <stdlib.h>

struct Misol {
    int n;        // Massiv o'lchami
    int array[];  // Moslashuvchan massiv
};

int main() {
    int n = 5;
    struct Misol *ptr = malloc(sizeof(struct Misol) + n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi.\n");
        return 1;
    }

    ptr->n = n;

    for (int i = 0; i < n; i++) {
        ptr->array[i] = i * i;
    }

    printf("Massiv qiymatlari:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr->array[i]);
    }

    free(ptr);

    return 0;
}
