// EOF — bu fayl oxiriga yetganingizni bildiruvchi maxsus doimiy qiymat
// while ((ch = fgetc(fp)) != EOF) {
//     printf("%c", ch); // Har bir belgini chiqaradi
// }

// getc() fayldan bitta belgini o'qiydi
// getc() va fgetc() funksiyalari o'xshash, lekin getc() odatda tezroq ishlaydi, chunki u makro sifatida amalga oshiriladi
// while ((ch = getc(fp)) != EOF) {
//     printf("%c", ch); // Belgilarni chiqaradi
// }

// feof() fayl ko'rsatkichining oxiriga yetganini aniqlash uchun ishlatiladi
// Faylni o'qishda EOF ga yetgach, bu funksiya true qaytaradi

#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Fayl ochishda xatolik!\n");
        return 1;
    }

    int ch;
    while (!feof(fp)) {
        ch = getc(fp);
        if (ch != EOF) {
            printf("%c", ch);
        }
    }

    // qo'shimcha misol
    printf("\n###\n");
    rewind(fp);
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }

    if (feof(fp)) {
        printf("\nFayl oxiriga yetildi!\n");
    }

    fclose(fp);
    return 0;
}
