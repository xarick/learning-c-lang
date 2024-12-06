#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void second() {
    printf("second() funksiyasi ichida\n");
    longjmp(buf, 1); // setjmp() joylashuviga qaytish
}

void first() {
    printf("first() funksiyasi ichida\n");
    second(); // second() funksiyasini chaqirish
    printf("Bu qator hech qachon ishlamaydi.\n");
}

int main() {
    if (setjmp(buf)) {
        printf("setjmp() orqali qaytdi!\n");
    } else {
        printf("Dastur oddiy davom etmoqda.\n");
        first();
    }
    return 0;
}

// Dastur oddiy davom etmoqda.
// first() funksiyasi ichida
// second() funksiyasi ichida
// setjmp() orqali qaytdi!
