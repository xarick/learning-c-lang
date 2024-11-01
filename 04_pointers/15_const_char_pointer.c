#include <stdio.h>
#include <stdlib.h>

// const char *p: ko'rsatilgan qiymat o'zgarmas, lekin pointer o'zgartirilishi mumkin
// char * const p: pointer o'zgartirilmaydi, lekin qiymat o'zgarishi mumkin
// const char * const p: qiymat ham, pointer ham o'zgarmaydi
// o'zgarmas pointer va o'zgarmas qiymatga ega pointer
void constantPointet() {
    int a = 5, b = 10;
    const int *ptr1 = &a;  // O'zgarmas qiymatga ega pointer
    int *const ptr2 = &a;  // O'zgarmas pointer

    printf("const int *ptr1: %d\n", *ptr1);
    printf("const int *ptr1: %p\n", ptr1);

    printf("int *const ptr2: %d\n", *ptr2);
    printf("int *const ptr2: %p\n", ptr2);

    // *ptr1 = 20;  // Xatolik: ptr1 orqali qiymat o'zgartirib bo'lmaydi
    ptr1 = &b;    // Boshqa manzilga ishora qilish mumkin

    *ptr2 = 20;   // ptr2 orqali qiymat o'zgartirilishi mumkin
    // ptr2 = &b;  // Xatolik: ptr2 boshqa manzilga ishora qila olmaydi
    
    printf("const int *ptr1(2): %d\n", *ptr1);
    printf("const int *ptr1(2): %p\n", ptr1);

    printf("int *const ptr2(2): %d\n", *ptr2);
    printf("int *const ptr2(2): %p\n", ptr2);
}

int main()
{
    constantPointet();
    return 0;
}