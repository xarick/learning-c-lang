// _Exit() funksiyasi ham dasturni tugatadi, lekin u exit()dan farqli ravishda tozalash yoki yakunlovchi vazifalarni bajarmaydi
#include <stdio.h>
#include <stdlib.h>

void goodbye() {
    printf("Dastur tugatildi.\n");
}

int main() {
    // `atexit` funksiyasini ro'yxatga olish
    // exit() chaqirilganda atexit() funksiyalari ishga tushadi
    atexit(goodbye); 

    printf("Dastur ishlamoqda...\n");
    exit(0);

    // ushbu _Exit bajarilsa, atexit() funksiyalari ishga tushmaydi
    _Exit(0);
}
