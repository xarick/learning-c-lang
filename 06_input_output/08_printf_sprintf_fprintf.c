#include <stdio.h>

// printf() matnni ekranga chiqaradi
// sprintf() matnni o'zgaruvchiga yozadi
// fprintf() matnni faylga yoki boshqa oqimga yozadi

int main() {
    int yosh_p = 25;
    printf("Mening yoshim %d\n", yosh_p);  // Ekranga chiqaradi

    char matn[50];
    int yosh = 25;
    sprintf(matn, "Mening yoshim %d", yosh);  // Matn o'zgaruvchiga yoziladi
    printf("%s\n", matn);  // Keyinchalik ekranga chiqarish uchun

    FILE *fayl = fopen("08_fayl.txt", "w");  // Faylni yozish uchun ochish
    int yosh_f = 25;
    if (fayl != NULL) {
        fprintf(fayl, "Mening yoshim %d\n", yosh_f);  // Faylga yozadi
        fclose(fayl);  // Faylni yopish
    } else {
        printf("Fayl ochishda xatolik yuz berdi.\n");
    }

    return 0;
}
