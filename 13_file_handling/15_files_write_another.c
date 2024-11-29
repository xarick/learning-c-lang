
#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    // Birinchi faylni ochish
    file1 = fopen("test.txt", "r");
    if (file1 == NULL) {
        perror("Birinchi faylni ochishda xatolik");
        return 1;
    }

    // Ikkinchi faylni ochish
    file2 = fopen("test5.txt", "r");
    if (file2 == NULL) {
        perror("Ikkinchi faylni ochishda xatolik");
        fclose(file1);
        return 1;
    }

    // Uchinch faylni yozish rejimida ochish
    file3 = fopen("merged.txt", "w");
    if (file3 == NULL) {
        perror("Uchinchi faylni yaratishda xatolik");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Fayllardan o'qish va uchinchi faylga yozish
    // Birinchi fayldan o'qish
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Ikkinchi fayldan o'qish
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    // Fayllarni yopish
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Fayllar muvaffaqiyatli birlashtirildi.\n");

    return 0;
}
