#include <stdio.h>

int main() {
    char ch;
    printf("Belgilar kiriting (exit uchun 'q' bosing):\n");
    
    // _getchar_nolock() = 
    while ((ch = getchar_unlocked()) != 'q') {  // Belgilarni o'qiydi
        putchar(ch);  // Har bir o'qilgan belgi ekranga chiqariladi
    }

    return 0;
}
