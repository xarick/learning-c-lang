#include <stdio.h>

void ChangeValues() {
    FILE *fp = fopen("test5.txt", "r+");
    if (fp == NULL) {
        perror("Faylni ochib bo'lmadi");
        return 1;
    }

    // Fayl boshidan 6 baytga o'tish
    fseek(fp, 6, SEEK_SET);

    // Belgini o'zgartirish
    fputc('X', fp);

    printf("6-pozitsiyadagi belgi o'zgartirildi.\n");

    fclose(fp);
}

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("Faylni ochib bo'lmadi");
        return 1;
    }

    // Fayl oxiridan 10 bayt oldin
    fseek(fp, -10, SEEK_END);

    // Belgilarni o'qish
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    ChangeValues();
    return 0;
}

// fseek()	Fayl ko'rsatkichini istalgan pozitsiyaga ko'chiradi.
// rewind()	Fayl ko'rsatkichini boshiga qaytaradi (tezkor).
// fsetpos()	Fayl ko'rsatkichini aniq pozitsiyaga o'rnatadi (fpos_t turi bilan).