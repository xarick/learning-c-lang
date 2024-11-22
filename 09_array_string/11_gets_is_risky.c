// gets() foydalanuvchi kiritgan belgilar sonini nazorat qilmaydi
// gets() o‘rniga fgets() funksiyasidan foydalanish tavsiya etiladi.

// foydalanish tavsiya etilmaydi
// char buffer[10]; // Faqat 10 belgiga joy ajratilgan
// gets(buffer);    // Foydalanuvchi satr kiritadi
// printf("You entered: %s\n", buffer);

#include <stdio.h>

int main() {
    char buffer[10]; // Faqat 10 belgiga joy ajratilgan

    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin); // Massiv chegarasini belgilaydi

    printf("You entered: %s\n", buffer);
    return 0;
}
