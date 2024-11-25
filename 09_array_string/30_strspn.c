// strspn() — <string.h> - Bu funksiya bir qator belgilar orasidan qaysi biri birinchi marta boshqa qator ichida uchramasligini topadi
// strspn() - funksiyasi matn boshidagi mos keladigan belgilar sonini hisoblash uchun ishlatiladi

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "12345abc";
    char str2[] = "1234567890";

    size_t length = strspn(str1, str2);

    printf("Boshida mos kelgan belgilar soni: %zu\n", length);

    return 0;
}
