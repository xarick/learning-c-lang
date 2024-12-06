// Assert funksiyasini o'chirish:
// #define NDEBUG

#include <stdio.h>
#include <assert.h>

int divide(int a, int b) {
    // Noldan bo'lib bo'lmasligini tekshirish
    assert(b != 0);
    return a / b;
}

int main() {
    int x = 10, y = 0;

    printf("Bo'linma natijasi: %d\n", divide(x, y)); // Bu yerda assert xato beradi
    return 0;
}

// Agar shart noto'g'ri bo'lsa(ya'ni, false), dastur ishini to'xtatadi va konsolda xato xabarini ko'rsatadi.