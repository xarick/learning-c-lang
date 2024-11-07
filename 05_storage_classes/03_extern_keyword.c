#include <stdio.h>

extern int umumiySon; // boshqa fayldagi umumiySon o‘zgaruvchisiga murojaat
extern void chiqar(); // boshqa fayldagi chiqar funksiyasiga murojaat

int main() {
    chiqar();  // Natija: Umumiy son: 100
    umumiySon = 200;
    chiqar();  // Natija: Umumiy son: 200
    return 0;
}

// run qilish uchun
// gcc 03_extern_keyword.c 03_extern_var.c -o 03.exe