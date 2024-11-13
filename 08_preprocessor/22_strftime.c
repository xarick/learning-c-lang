// strftime() - bu C tilida vaqt va sanani belgilangan formatga moslab chiqarish uchun ishlatiladi

// #include <time.h>
// size_t strftime(char *str, size_t max, const char *format, const struct tm *timeptr);

// str: Natija sifatida chiqariladigan satr (string). Bu joyga formatlangan vaqt saqlanadi.
// max: str massivining maksimal uzunligi.
// format: Format satri, ya'ni vaqtni qanday ko'rinishda chiqarilishi kerakligini belgilaydi.
// timeptr: tm tuzilmasidagi vaqt ma'lumotlarini o'z ichiga olgan ko'rsatkich.

// strftime() format satrida quyidagi maxsus belgilarni ishlatish mumkin:
// %Y: To'liq yil (masalan, 2024)
// %m: Oy raqami (01-12)
// %d: Oyning kunduzgi raqami (01-31)
// %H: Soat (00-23)
// %M: Daqiqalar (00-59)
// %S: Sekundlar (00-59)
// %A: Haftaning kuni (to'liq nomi, masalan, "Monday")
// %a: Haftaning kuni (qisqartirilgan nomi, masalan, "Mon")
// %B: Oy nomi (to'liq nomi, masalan, "January")
// %b: Oy nomi (qisqartirilgan nomi, masalan, "Jan")
// %c: To'liq vaqt (masalan, "Mon Jan 1 12:00:00 2024")

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);  // Hozirgi vaqtni olish
    struct tm *tm_info = localtime(&t);  // Hozirgi vaqtni tm strukturasiga aylantirish

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm_info);  // Vaqtni formatlash
    printf("Current time: %s\n", buffer);  // Formatlangan vaqtni chiqarish

    return 0;
}
