#include <stdio.h>

volatile int flag = 0;  // Flag o'zgaruvchisi volatile sifatida e'lon qilinadi

void interrupt_handler() {
    flag = 1;  // Signal yoki interrupt tomonidan yangilanadi
}

int main() {
    while (flag == 0) {
        // Flag o'zgaruvchisi signaldan yangilanmaguncha kutib turadi
    }
    printf("Interrupt keldi\n");
    return 0;
}

// Xulosa
// volatile kalit so'zi o'zgaruvchining qiymatiga tashqi yoki o'zgaruvchan manba (masalan, signal, interrupt, yoki apparat) tomonidan o'zgarishlar kiritilishi mumkinligini bildiradi.
// Kompilyatorni optimallashtirishdan saqlash uchun ishlatiladi.
// Asosan apparat bilan ishlash, signal va boshqa tashqi manbalardan o'zgaruvchilarni olishda foydalaniladi.
