#include <stdio.h>

int main() {
    int a = 10;       // Oddiy integer o'zgaruvchi
    int *p = &a;      // p ko'rsatgichi a o'zgaruvchining manzilini saqlaydi
    int **pp = &p;    // pp ko'rsatgichi p ko'rsatgichining manzilini saqlaydi

    printf("a ning qiymati: %d\n", a);            // 10
    printf("*p ning qiymati: %d\n", *p);          // 10
    printf("**pp ning qiymati: %d\n", **pp);      // 10

    printf("a ning manzili: %p\n", (void*)&a);
    printf("p ning qiymati (a ning manzili): %p\n", (void*)p);
    printf("pp ning qiymati (p ning manzili): %p\n", (void*)pp);

    return 0;
}
