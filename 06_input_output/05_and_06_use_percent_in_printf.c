#include <stdio.h>

int main() {
    int char_soni = 0;
    printf("Salom, dunyo! %n", &char_soni);  // Hozirgacha chiqarilgan belgilar sonini saqlaydi
    printf("Belgilar soni: %d\n", char_soni); // Belgilar sonini chiqaradi


    // % belgisi chiqarish uchun uni ikki marta yozish kerak
    printf("Bu erda %% belgisi chiqariladi.\n");
    return 0;
}

// %n hech qanday qiymatni ekranga chiqarish uchun ishlatilmaydi; 
// u faqat belgilar sonini hisoblash uchun qo‘llaniladi.