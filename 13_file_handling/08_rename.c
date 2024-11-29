#include <stdio.h>

int main() {
    // Mavjud fayl nomi
    const char *old_name = "test4.txt";
    // Yangi fayl nomi
    const char *new_name = "test5.txt";

    // Fayl nomini o'zgartirish
    if (rename(old_name, new_name) == 0) {
        printf("Fayl nomi muvaffaqiyatli o'zgartirildi.\n");
    } else {
        perror("Xatolik yuz berdi");
    }

    // Mavjud fayl yo'li
    const char *old_path = "./test.txt";
    // Yangi katalogga yo'l
    const char *new_path = "./folder/test.txt";

    // Faylni ko'chirish
    if (rename(old_path, new_path) == 0) {
        printf("Fayl muvaffaqiyatli ko'chirildi.\n");
    } else {
        perror("Xatolik yuz berdi");
    }

    return 0;
}
