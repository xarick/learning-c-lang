// fseek() funksiya xohlagan pozitsiyaga o'tish uchun ishlatiladi

// rewind() Fayl ichida pozitsiyani nolga (0) o'rnatadi. 
// Bu funksiya faqat boshiga qaytish uchun ishlatiladi

// putchar() faqat bitta belgini ekranga chiqaradi

// fgetc(): Fayldan bitta belgi o'qish uchun ishlatiladi.
// fputc(): Faylga bitta belgi yozish uchun ishlatiladi.
// fgets(): Fayldan bir satrni o'qish uchun ishlatiladi.
// fputs(): Faylga butun satrni yozish uchun ishlatiladi.
// fprintf(): Faylga formatlangan ma'lumotlarni yozish uchun ishlatiladi.

#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Fayl ochishda xatolik!\n");
        return 1;
    }

    // Fayl ko'rsatkichini 10 baytga siljitish (boshlanishdan boshlab)
    fseek(fp, 10, SEEK_SET);

    // Faylni o'qish
    char ch = fgetc(fp);
    printf("10-pozitsiyadagi belgi: %c\n", ch);

    // Faylni boshidan o'qishga tayyorlash
    rewind(fp);

    printf("\nFayl boshidan qayta o'qiladi:\n");

    // Faylni qayta o'qish
    char ch2;
    while ((ch2 = fgetc(fp)) != EOF) {
        printf("%c", ch2);
    }

    // Faylni yopish
    fclose(fp);

    return 0;
}
