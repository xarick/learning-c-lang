#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Talaba {
    int id;
    char ism[50];
    float baho;
};

int taqqoslash(const void *a, const void *b) {
    struct Talaba *talaba1 = (struct Talaba *)a;
    struct Talaba *talaba2 = (struct Talaba *)b;

    // Baho bo'yicha kamayish tartibida
    if (talaba1->baho > talaba2->baho) return -1;
    if (talaba1->baho < talaba2->baho) return 1;

    // Agar baholar teng bo'lsa, ism bo'yicha alifbo tartibida
    return strcmp(talaba1->ism, talaba2->ism);
}

int main() {
    struct Talaba talabalar[] = {
        {1, "Ali", 85.5},
        {2, "Vali", 92.0},
        {3, "Anvar", 85.5},
        {4, "Dilshod", 75.0},
        {5, "Sardor", 92.0}
    };
    int n = sizeof(talabalar) / sizeof(talabalar[0]);

    // Saralashdan oldin
    printf("Saralashdan oldin:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Ism: %s, Baho: %.1f\n", talabalar[i].id, talabalar[i].ism, talabalar[i].baho);
    }

    // Saralash
    qsort(talabalar, n, sizeof(struct Talaba), taqqoslash);

    // Saralashdan keyin
    printf("\nSaralashdan keyin:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Ism: %s, Baho: %.1f\n", talabalar[i].id, talabalar[i].ism, talabalar[i].baho);
    }

    return 0;
}
