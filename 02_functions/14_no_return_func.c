#include <stdlib.h>
#include <stdio.h>
#include <stdnoreturn.h> // C11 dan boshlab kerakli kutubxona

// _Noreturn funksiyaning hech qachon qaytmasligini kompilyatorga bildiradi
_Noreturn void xatoni_tugat() {
    printf("Jiddiy xato! Dastur tugatilmoqda.\n");
    exit(1); // Funksiya bu yerda tugaydi va hech qachon qaytmaydi
}

int main() {
    xatoni_tugat();
    printf("Bu kod hech qachon bajarilmaydi.\n");
    return 0;
}
