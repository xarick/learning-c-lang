#include <stdio.h>

int main() {
    // Vaqtinchalik fayl yaratish
    FILE *temp_fp = tmpfile();

    if (temp_fp == NULL) {
        perror("Vaqtinchalik fayl yaratishda xatolik yuz berdi");
        return 1;
    }

    // Faylga yozish
    fprintf(temp_fp, "Bu vaqtinchalik faylga yozilgan matn.\n");

    // Faylni boshidan o'qish uchun qayta ko'rsatkichni boshiga olish
    rewind(temp_fp);

    // Fayldan o'qish
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), temp_fp) != NULL) {
        printf("Fayldan o'qildi: %s", buffer);
    }

    // Fayl yopilganda avtomatik ravishda o'chiriladi
    fclose(temp_fp);

    return 0;
}
