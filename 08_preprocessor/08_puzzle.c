#include <stdio.h>

int main() {
    // 1 dan 100 gacha bo'lgan barcha tub sonlarni ekranga chiqarish
    // int num, i, flag;

    // for (num = 2; num <= 100; num++) {
    //     flag = 0;

    //     for (i = 2; i <= num / 2; i++) {
    //         if (num % i == 0) {
    //             flag = 1;
    //             break;
    //         }
    //     }

    //     if (flag == 0) {
    //         printf("%d ", num);
    //     }
    // }

    // Berilgan matnni teskari tartibda chiqarish
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);
    printf("Reversed string: ");
    for (i = length - 2; i >= 0; i--) {  // -2 to ignore the newline character
        printf("%c", str[i]);
    }

    return 0;
}
