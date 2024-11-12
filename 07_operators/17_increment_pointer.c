#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    ++*p; // Bu yerda a ning qiymati 1 ga oshiriladi

    printf("a = %d\n", a); // Natija: a = 6

    // 2-misol
    int arr[] = {10, 20, 30};
    int *p2 = arr;

    printf("%d\n", *p2++); // Natija: 10, so'ng p keyingi elementga ko'rsatadi
    printf("%d\n", *p2);   // Natija: 20
    return 0;
}

// ++*p — Ko‘rsatkich orqali olingan qiymatni oshiradi.
// *p++ — Eski qiymatni qaytaradi va keyin ko‘rsatkichni keyingi manzilga o‘tkazadi.
// *++p — Avval ko‘rsatkichni keyingi manzilga o‘tkazadi, so‘ng yangi manzildagi qiymatni qaytaradi.
