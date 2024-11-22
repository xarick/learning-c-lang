#include <stdio.h>
#include <string.h>

// Oddiy massivlarda nusxalash
// int main() {
//     int massiv1[] = {1, 2, 3};
//     int massiv2[3];

//     // Massivni nusxalash
//     for (int i = 0; i < 3; i++) {
//         massiv2[i] = massiv1[i];
//     }

//     massiv1[0] = 10; // massiv1 ni o‘zgartirish

//     // massiv2 mustaqil qoladi
//     printf("massiv2[0]: %d\n", massiv2[0]); // Natija: 1

//     return 0;
// }

// Yuzaki nusxalash (Shallow Copy)
// int main() {
//     char *massiv1[] = {"Hello", "World"};
//     char *massiv2[2];

//     // Yuzaki nusxalash
//     for (int i = 0; i < 2; i++) {
//         massiv2[i] = massiv1[i];
//     }

//     // massiv1 va massiv2 bir xil ma’lumot manziliga ishora qiladi
//     printf("massiv2[0]: %s\n", massiv2[0]);

//     // massiv1 ma’lumotini o‘zgartirish
//     massiv1[0] = "Changed";

//     // massiv2 ham o‘zgaradi
//     printf("massiv2[0]: %s\n", massiv2[0]);

//     return 0;
// }

// Chuqur nusxalash (Deep Copy)
int main() {
    char *massiv1[] = {"Hello", "World"};
    char *massiv2[2];

    // Chuqur nusxalash
    for (int i = 0; i < 2; i++) {
        massiv2[i] = malloc(strlen(massiv1[i]) + 1); // Yangi xotira ajratish
        strcpy(massiv2[i], massiv1[i]);             // Ma’lumotni nusxalash
    }

    // massiv1 ma’lumotini o‘zgartirish
    massiv1[0] = "Changed";

    // massiv2 o‘zgarmaydi
    printf("massiv2[0]: %s\n", massiv2[0]);

    // Ajratilgan xotirani tozalash
    for (int i = 0; i < 2; i++) {
        free(massiv2[i]);
    }

    return 0;
}

// Xulosa
// Oddiy massivlar (int, float, char turlaridagi) avtomatik ravishda chuqur nusxalanadi.
// Ko‘rsatkich massivlari yuzaki nusxalanadi, va chuqur nusxalashni dasturchi qo‘lda amalga oshirishi kerak.
// Chuqur nusxalashda ma’lumotlarni mustaqil qilish uchun yangi xotira ajratilishi lozim (malloc, strcpy va boshqalar yordamida).