// Scanset — bu scanf funksiyasida maxsus belgilar to‘plamini o‘qish imkonini beruvchi vositadir

// scanf("%[scanset]", variable);
// %[a-z] — kichik harflardan iborat satrni o‘qiydi.
// %[A-Z] — faqat katta harflardan iborat satrni o‘qiydi.
// %[0-9] — faqat raqamlardan iborat satrni o‘qiydi.

#include <stdio.h>

int main() {
    char str[100];

    printf("Kichik harflarni kiriting: ");
    scanf("%[a-z]", str);  // Faqat kichik harflarni o'qiydi (a-z)

    // scanf("%[A-Za-z0-9]", str);  // Katta-kichik harflar va raqamlarni o'qiydi

    // scanf("%[^0-9]", str);  // Faqat raqamlardan boshqa belgilarni o'qiydi

    // kichik harf tugagan joygacha o'qiydi
    printf("Kiritilgan kichik harflar: %s\n", str);
    return 0;
}
