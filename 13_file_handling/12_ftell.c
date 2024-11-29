// ftell()	Fayl ko'rsatkichining joriy pozitsiyasini oladi.
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("Faylni ochib bo'lmadi");
        return 1;
    }

    // Faylning dastlabki pozitsiyasini aniqlash
    printf("Boshlang'ich pozitsiya: %ld\n", ftell(fp));

    // Fayldan bir nechta belgini o'qish
    char ch;
    for (int i = 0; i < 5; i++) {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    // Joriy pozitsiyani aniqlash
    printf("\nHozirgi pozitsiya: %ld\n", ftell(fp));

    // Joriy pozitsiyadan yana 5-baytga siljitish
    // SEEK_SET - boshidan suradi
    // SEEK_CUR - joriy turgan joydan suradi
    // SEEK_END - oxirgi joydan suradi
    fseek(fp, 5, SEEK_CUR);

    // Joriy pozitsiyani qayta aniqlash
    long pos = ftell(fp);
    printf("Joriy pozitsiya (5 bayt surilgan): %ld\n", pos);

    fclose(fp);
    return 0;
}
