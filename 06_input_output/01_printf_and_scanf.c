#include <stdio.h>

// printf() - chiqarish uchun
// Qaytaradi: int turidagi qiymat.
// Qaytariladigan qiymat: Ekranga chiqarilgan belgilar soni (nuqtali vergul bilan ajratilgan).
// Agar xato yuzaga kelsa, -1 qaytariladi.

// scanf() - qabul qilish uchun
// Qaytaradi: int turidagi qiymat.
// Foydalanuvchidan to‘g‘ri qiymatlarni olish muvaffaqiyatli bo‘lsa, u kiritilgan qiymatlar sonini qaytaradi.
// Agar xato yuzaga kelsa (masalan, kutilgan turdagi ma'lumot kiritilmasa), EOF (End Of File, -1) qaytariladi.

int main() {
    int result_p = printf("Salom, dunyo!\n");
    printf("Chop etilgan belgilar soni: %d\n", result_p);

    int num;
    int result = scanf("%d", &num);

    if (result == 1) {
        printf("Siz kiritgan raqam: %d\n", num);
    } else {
        printf("Xato: raqam kiritilmadi!\n");
    }

    // int num1, num2;
    // int result = scanf("%d %d", &num1, &num2);
    // if (result == 2)
    // printf("Siz kiritgan raqamlar: %d va %d\n", num1, num2);

    return 0;
}
