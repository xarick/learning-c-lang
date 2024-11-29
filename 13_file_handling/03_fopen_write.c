#include <stdio.h>

int main() {
    // w - yangi yozish uchun
    // a - malumot qo'shish uchun
    FILE *fp = fopen("test2.txt", "w");

    if (fp == NULL) {
        printf("Fayl ochishda xatolik yuz berdi!\n");
        return 1;
    }

    fprintf(fp, "Bu yangi yozilgan ma'lumot!\n");
    fclose(fp);

    printf("Ma'lumot faylga muvaffaqiyatli yozildi.\n");
    return 0;
}

// "r": Faylni faqat o'qish uchun ochadi. Fayl mavjud bo'lmasa, xato beradi.
// "w": Faylni yozish uchun ochadi. Agar fayl mavjud bo'lsa, uning tarkibini o'chiradi, agar fayl mavjud bo'lmasa, yangi fayl yaratadi.
// "a": Faylga qo'shish (append) rejimi. Yozilgan ma'lumot fayl oxiriga qo'shiladi.
// "r+": Faylni o'qish va yozish uchun ochadi. Fayl mavjud bo'lishi kerak.
// "w+": Faylni o'qish va yozish uchun ochadi. Agar fayl mavjud bo'lsa, uning tarkibini o'chiradi, agar fayl mavjud bo'lmasa, yangi fayl yaratadi.
// "a+": Faylni o'qish va qo'shish rejimi. Yozilgan ma'lumot fayl oxiriga qo'shiladi.
