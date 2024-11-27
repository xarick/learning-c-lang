// union — bu ma'lumot turi bo'lib, bir nechta o'zgaruvchilarni bitta xotira maydonida saqlaydi

#include <stdio.h>

union Malumot {
    int butun;
    float haqiqiy;
    char belgilar[20];
};

int main() {
    union Malumot malumot;

    malumot.butun = 42;
    printf("Butun son: %d\n", malumot.butun);

    malumot.haqiqiy = 3.14;
    printf("Haqiqiy son: %.2f\n", malumot.haqiqiy);

    strcpy(malumot.belgilar, "Salom");
    printf("Belgilar: %s\n", malumot.belgilar);

    // E'tibor bering: faqat oxirgi qiymat saqlanadi!
    printf("Butun son (oxirgi holat): %d\n", malumot.butun);
    printf("Haqiqiy son (oxirgi holat): %.2f\n", malumot.haqiqiy);

    return 0;
}
