#include <stdio.h>
#include <string.h>
#include <locale.h>

// 0: Agar ikkala satr teng bo‘lsa
int main() {
    setlocale(LC_COLLATE, ""); // Mahalliy sozlamalarni o‘rnatish

    char str1[] = "zebra";
    char str2[] = "apple";

    int result = strcoll(str1, str2);

    if (result < 0) {
        printf("\"%s\" mahalliy sozlamalarga ko‘ra \"%s\" dan oldin keladi.\n", str1, str2);
    } else if (result > 0) {
        printf("\"%s\" mahalliy sozlamalarga ko‘ra \"%s\" dan keyin keladi.\n", str1, str2);
    } else {
        printf("\"%s\" va \"%s\" teng.\n", str1, str2);
    }

    return 0;
}
