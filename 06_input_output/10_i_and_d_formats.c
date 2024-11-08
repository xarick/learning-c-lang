#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting (0 bilan boshlansa sakkizlik, 0x bilan boshlansa o‘n oltilik): ");
    scanf("%i", &son);  // Formatni aniqlab, sonni qabul qiladi
    printf("Siz kiritgan son: %d\n", son);  // Decimal formatda chiqaradi
    return 0;
}

// %d	O‘nlik sonni chiqaradi	Faqat o‘nlik son sifatida qabul qiladi
// %i	O‘nlik sonni chiqaradi	Sakkizlik, o‘nlik yoki o‘n oltilikni tanlaydi

//  Agar o‘n oldida 0 (nol) bo‘lsa, sakkizlik, agar 0x yoki 0X bo‘lsa, o‘n oltilik sifatida qabul qiladi

