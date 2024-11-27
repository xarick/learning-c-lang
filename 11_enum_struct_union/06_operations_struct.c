#include <stdio.h>

struct Talaba {
    int id;           // Talaba ID'si
    char ism[50];     // Talaba ismi
    float baho;       // Talabaning bahosi
};

void chop_et(struct Talaba t) {
    printf("ID: %d, Ism: %s, Baho: %.2f\n", t.id, t.ism, t.baho);
}

void chop_et2(struct Talaba *t) {
    printf("ID: %d, Ism: %s, Baho: %.2f\n", t->id, t->ism, t->baho);
}

int main() {
    struct Talaba talaba1 = {1, "Ali", 4.5};
    struct Talaba talaba2;

    talaba2 = talaba1;

    printf("ID: %d\n", talaba2.id);
    printf("Ism: %s\n", talaba2.ism);
    printf("Baho: %.2f\n", talaba2.baho);

    if (talaba1.id == talaba2.id && strcmp(talaba1.ism, talaba2.ism) == 0 && talaba1.baho == talaba2.baho) {
        printf("Strukturalar bir xil.\n");
    } else {
        printf("Strukturalar bir xil emas.\n");
    }

    chop_et(talaba2);
    chop_et2(&talaba2);

    struct Talaba talabalar[2] = {
        {1, "Ali", 4.5},
        {2, "Vali", 3.8}
    };

    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Ism: %s, Baho: %.2f\n", talabalar[i].id, talabalar[i].ism, talabalar[i].baho);
    }

    printf("\n");
    struct Talaba *talaba = (struct Talaba *)malloc(sizeof(struct Talaba));

    talaba->id = 1;
    strcpy(talaba->ism, "Ali");
    talaba->baho = 4.5;
    
    printf("ID: %d, Ism: %s, Baho: %.2f\n", talaba->id, talaba->ism, talaba->baho);
    
    free(talaba);

    return 0;
}
