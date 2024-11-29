// remove() funksiyasi, faylni o'chirish uchun ishlatilad

#include <stdio.h>
#include <unistd.h>  // sleep() uchun kutubxona

int main() {
    const char *filename = "sample.txt";

    // Faylni yaratib, unga yozish
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Faylni yaratishda xatolik");
        return 1;
    }
    
    fprintf(fp, "Bu fayl 10 soniya kutib o'chiriladi.\n");
    fclose(fp);

    // 10 soniya kutish
    printf("Fayl 10 soniya kutib o'chiriladi...\n");
    sleep(10);  // 10 soniya kutish

    // Faylni o'chirish
    if (remove(filename) == 0) {
        printf("Fayl muvaffaqiyatli o'chirildi.\n");
    } else {
        perror("Faylni o'chirishda xatolik");
    }

    return 0;
}
