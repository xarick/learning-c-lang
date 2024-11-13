#include <stdio.h>

int main() {
    char buffer[L_tmpnam];  // Vaqtinchalik nom uchun bufer
    
    // Vaqtinchalik nom yaratish
    char *temp_name = tmpnam(buffer);

    if (temp_name != NULL) {
        printf("Vaqtinchalik fayl nomi: %s\n", temp_name);
    } else {
        printf("Xatolik: vaqtinchalik fayl nomini yaratib bo'lmadi\n");
    }

    return 0;
}

// tmpnam() funksiyasi vaqtinchalik fayllar yaratish kerak bo'lganda noyob nom yaratishda yordam beradi.
// Xavfsizlik sababli, bunday holatlarda mkstemp() funksiyasi ishlatish tavsiya etiladi
