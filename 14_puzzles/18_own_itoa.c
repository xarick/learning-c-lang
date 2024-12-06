#include <stdio.h>
#include <string.h>

// max raqam uzunligini hisoblash
int getLength(int num) {
    int length = 0;
    if (num == 0) {
        return 1;  // 0 uzunligi 1
    }
    while (num != 0) {
        length++;
        num /= 10;  // Sonni 10ga bo'lib boramiz
    }
    return length;
}

// itoa() funksiyasini o'zi
void itoa(int num, char *str) {
    int i = 0;
    int length = getLength(num);
    int isNegative = 0;

    // Manfiy sonlar uchun maxsus ishlov berish
    if (num < 0) {
        isNegative = 1;
        num = -num;  // Manfiy sonni musbatga aylantirish
    }

    // Sonni teskari tartibda saqlash (raqamlarni oxiridan boshlash)
    while (num != 0) {
        str[i++] = num % 10 + '0';  // raqamni satrga qo'shish
        num /= 10;  // Sonni 10ga bo'lib boramiz
    }

    // Agar son manfiy bo'lsa, minus belgisini qo'shish
    if (isNegative) {
        str[i++] = '-';
    }

    // Satrni teskari tartibda joylashtirish
    str[i] = '\0';  // Satr oxiriga null terminator qo'shish

    // Satrni teskari qilish (raqamlarni to'g'ri tartibda joylashtirish)
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int num = -12345;
    char str[20];  // Katta butun son uchun yetarli joy

    itoa(num, str);
    printf("Sonni satrga aylantirish: %s\n", str);  // Natija: "-12345"

    return 0;
}
