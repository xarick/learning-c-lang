#include <stdio.h>
#include <stdlib.h>

// darling pointer - o'z joyi yo'qotilgan ko'rsatgich
void danglingPointer() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 5;

    free(ptr);   // ptr dangling pointer bo'ldi
    printf("Done\n");

    ptr = NULL; //  dangling pointer emas
}

// void pointer - nomalum turdagi pointer
void voidPointer(void *ptr, char type) {
    if (type == 'i')
        printf("%d\n", *(int *)ptr);
    else if (type == 'f')
        printf("%f\n", *(float *)ptr);
}


// null pointer - null qiymat olgan pointer
void nullPointer() {
    int* ptr = NULL;
    printf("null pointer: %p\n", ptr);
}

// wild pointer — qiymat berilmagan pointer
void wildPointer() {
    int *ptr; // ptr qiymati yo'q, bu wild pointer
    printf("wild pointer: %p\n", ptr);
}

// function pointer — funksiyaga ishora qiluvchi pointer
void funcPointer() {
    printf("func pointer\n");
}

// array pointer - massivning birinchi elementiga ishora qiluvchi pointer
void arrayPointer() {
    int arr[3] = {1, 2, 3};
    int *ptr = arr;  // arr[0] ning manzilini saqlaydi

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }
    
    printf("\n");
}

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
    danglingPointer();

    float v_b = 3.5;
    voidPointer(&v_b, 'f');

    nullPointer();

    wildPointer();

    void (*funcPtr)() = funcPointer;
    funcPtr();

    arrayPointer();

    constantPointet();

    return 0;
}