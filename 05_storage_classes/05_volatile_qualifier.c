// volatile kalit so'zi kompilyatorga ushbu o'zgaruvchining qiymati 
// tashqi ta'sirlardan o'zgarishi mumkinligini bildiradi. 
// Bu real vaqt tizimlari va apparat darajasida ishlash uchun muhim, 
// chunki kompilyator bu o'zgaruvchini optimallashtirmaydi

// Afzallik: volatile o‘zgaruvchilari real vaqt rejimida apparat bilan ishlashda yoki parallel oqimlarda to‘g‘ri qiymatni olishni ta’minlaydi.
// Ehtiyot chorasi: volatile o‘zgaruvchilarini faqat kerakli joyda qo‘llash kerak, chunki ular kompilyatorning optimallashtirish imkoniyatlarini kamaytiradi, bu esa dastur samaradorligini pasaytirishi mumkin

#include <stdio.h>

volatile int flag = 0;  // Bu o‘zgaruvchi volatile deb belgilangan

void interruptXizmati() {
    flag = 1;  // Biror voqea sodir bo‘lganda qiymatni yangilaydi
}

int main() {
    while (flag == 0) {
        // flag o‘zgaruvchisi `interruptXizmati` tomonidan yangilanishini kutmoqda
    }
    printf("Flag o‘zgardi! Dastur davom etmoqda...\n");
    return 0;
}
