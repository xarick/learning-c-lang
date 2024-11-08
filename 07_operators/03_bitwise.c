#include <stdio.h>

int main() {
    // bitlar orqali bajariladi
    int a = 5;   // 0000 0101
    int b = 9;   // 0000 1001

    printf("a & b = %d\n", a & b);   // Bitwise VA
    printf("a | b = %d\n", a | b);   // Bitwise YOKI
    printf("a ^ b = %d\n", a ^ b);   // Bitwise XOR
    printf("~a = %d\n", ~a);         // Bitwise EMAS (NOT)
    printf("a << 1 = %d\n", a << 1); // Chapga surish
    printf("a >> 1 = %d\n", a >> 1); // O‘ngga surish

    return 0;
}

// &	Bitwise VA (AND)	Ikkala bit 1 bo‘lganda natija 1, aks holda 0	a & b
// `	`	Bitwise YOKI (OR)	Kamida bitta bit 1 bo‘lsa natija 1, aks holda 0
// ^	Bitwise XOR	Ikkala bit turli bo‘lganda natija 1, aks holda 0	a ^ b
// ~	Bitwise EMAS (NOT)	Bitlarni teskari qiladi (0 ni 1 ga va 1 ni 0 ga o‘zgartiradi)	~a
// <<	Chapga surish	Bitlarni chapga suradi va o‘ng tomondan 0 kiritadi	a << 2
// >>	O‘ngga surish	Bitlarni o‘ngga suradi va chap tomondan 0 kiritadi	a >> 2
