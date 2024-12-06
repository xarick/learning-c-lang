#include <stdio.h>

int main() {
    int num = 1234;
    int sum = 0;
   
    while (num && (sum += num % 10, num /= 10));
    printf("Raqamlar yig'indisi: %d\n", sum);

    while (num > 0) sum += num % 10, num /= 10;
    printf("Raqamlarning yig'indisi: %d\n", sum);

    // printf("Raqamlarning yig'indisi: %d\n", (number / 10000) + (number / 1000 % 10) + (number / 100 % 10) + (number / 10 % 10) + (number % 10));

    return 0;
}
