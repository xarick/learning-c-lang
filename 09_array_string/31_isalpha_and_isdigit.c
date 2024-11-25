// isalpha() - Agar belgi harf bo‘lsa true qaytaradi
// isdigit() - Agar belgi raqam bo‘lsa true qaytaradi
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';
    if (isalpha(ch)) {
        printf("'%c' harfdir.\n", ch);
    } else {
        printf("'%c' harf emas.\n", ch);
    }

    char ch2 = '4';
    if (isdigit(ch2)) {
        printf("'%c' raqamdir.\n", ch2);
    } else {
        printf("'%c' raqam emas.\n", ch2);
    }

    char ch3 = '!';
    if (isalpha(ch3)) {
        printf("'%c' harfdir.\n", ch3);
    } else if (isdigit(ch3)) {
        printf("'%c' raqamdir.\n", ch3);
    } else {
        printf("'%c' na harf, na raqamdir.\n", ch3);
    }

    return 0;
}
