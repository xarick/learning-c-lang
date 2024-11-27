#include <stdio.h>
#include <stdlib.h>

struct Malumot {
    int uzunlik;
    char massiv[]; // Moslashuvchan massiv
};

int main() {
    int uzunlik = 10;
    struct Malumot *ptr = malloc(sizeof(struct Malumot) + uzunlik * sizeof(char));

    ptr->uzunlik = uzunlik;
    for (int i = 0; i < uzunlik; i++) {
        ptr->massiv[i] = 'A' + i;
    }

    printf("Massiv uzunligi: %d\n", ptr->uzunlik);
    printf("Massiv: ");
    for (int i = 0; i < uzunlik; i++) {
        printf("%c ", ptr->massiv[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
