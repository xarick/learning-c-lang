#include <stdio.h>

// & - manzil olish (Reference)
// * - manzil orqali qiymat olish (Dereference )

// int* ptr; // ptr manzil saqlaydi
// ptr = &var; // var ning manzilini olish
// *ptr // manzildagi qiymatni chiqarish

void geeks() {
    int var = 10;
    int* ptr;
    ptr = &var;

    printf("Value at var = %d \n", var);
    printf("Value at ptr = %p \n", ptr);
    printf("Value at *ptr = %d \n", *ptr);
}

int main() {
    geeks();
    return 0;
}
