#include <stdio.h>
#include <string.h>

int main() {
    // char massiv
    char s1[] = "Salom";
    // char ko'rsatkich
    char *s2 = "Salom";

    // Xotira ajratilishi
    printf("sizeof(s1): %zu\n", sizeof(s1)); // 6 (5 ta belgi + '\0')
    printf("sizeof(s2): %zu\n", sizeof(s2)); // 8 (64-bit ko'rsatkich)

    // O'zgartirish
    s1[0] = 'X'; // Muvaffaqiyatli
    printf("s1: %s\n", s1);

    // Quyidagi kod xatolik keltirib chiqaradi
    // s2[0] = 'X';

    return 0;
}
