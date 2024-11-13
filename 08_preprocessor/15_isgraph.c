#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';

    // chop etiladigan belgilar harflar, raqamlar va maxsus belgilar ekanligini tekshiradi
    if (isgraph(ch)) {
        printf("'%c' chop etilishi mumkin bo'lgan belgi va bo'sh joy emas.\n", ch);
    } else {
        printf("'%c' bo'sh joy yoki chop etilmaydigan belgidir.\n", ch);
    }

    return 0;
}

// Agar ch chop etilishi mumkin bo'lgan belgi bo'lsa va bo'sh joy bo'lmasa, isgraph() 1 qiymatini qaytaradi
