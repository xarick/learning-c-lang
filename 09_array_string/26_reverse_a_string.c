#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str); // Satr uzunligini aniqlash
    for (int i = 0; i < n / 2; i++) {
        // Boshi va oxirgi elementlarni almashtirish
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Satrni kiriting: ");
    fgets(str, 100, stdin); // Foydalanuvchidan satrni olish
    str[strcspn(str, "\n")] = '\0'; // Oxiridagi newline belgisini olib tashlash

    reverseString(str); // Satrni teskari aylantirish funksiyasiga yuborish

    printf("Teskari aylantirilgan satr: %s\n", str);
    return 0;
}
