// Asosiy funktsiyalar: stdio.h
// printf() – ma'lumotni ekranga chiqarish.
// scanf() – foydalanuvchidan ma'lumot olish.
// getchar() – bitta simvolni olish.
// putchar() – bitta simvolni chiqarish.
// fopen() – faylni ochish.
// fclose() – faylni yopish.
// fscanf() va fprintf() – fayldan o'qish va faylga yozish.

// Asosiy funktsiyalar: stdlib.h
// malloc() – xotira ajratish.
// free() – ajratilgan xotirani bo'shatish.
// exit() – dasturdan chiqish.
// rand() – tasodifiy son yaratish.
// srand() – tasodifiy sonlar uchun boshlang'ich nuqtani belgilash.
// atoi() – stringni butun son (integer) ga o'zgartirish.
// atof() – stringni haqiqiy son (float) ga o'zgartirish.
// system() – tashqi komanda bajarish.

#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // 5 ta int o'lchamida xotira ajratish
    if (arr == NULL) {
        exit(1); // Agar xotira ajratish muvaffaqiyatsiz bo'lsa, dasturdan chiqish
    }

    // Xotira bo'shatish
    free(arr);
    return 0;
}
