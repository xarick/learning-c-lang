// Quyidagi misolda fayldan ma'lumot o'qib, fayl ko'rsatkichini o'zgartirib, keyin qayta o'qish amalga oshirilgan
// fgetpos() funksiyasi fayl ko'rsatkichining hozirgi pozitsiyasini saqlaydi
// fsetpos() esa faylni saqlangan pozitsiyaga qaytaradi va undan keyin o'qishni davom ettiradi

#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Faylni ochishda xatolik!\n");
        return 1;
    }

    // Faylni o'qish
    char ch;
    printf("Faylning birinchi 5 belgisi:\n");
    for (int i = 0; i < 5; i++) {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    // Fayl ko'rsatkichini saqlash
    fpos_t pos;
    fgetpos(fp, &pos);

    // Fayl ko'rsatkichini 10-baytga siljitish
    fsetpos(fp, &pos);
    printf("\nFayl boshidan keyin o'qish:\n");

    // Keyingi 5 belgini o'qish
    for (int i = 0; i < 5; i++) {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
