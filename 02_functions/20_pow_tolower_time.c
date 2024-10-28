#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void powFunc() {
    double base, exponent, result;

    // lf - double uchun
    printf("Asosni kiriting: ");
    scanf("%lf", &base);
    printf("Ko'rsatkichni kiriting: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);
    printf("%.2f^%.2f = %.2f\n", base, exponent, result);

}

void toLowerFunc() {
    char ch = 'A';
    printf("Katta harf: %c\n", ch);

    ch = tolower(ch);
    printf("Kichik harf: %c\n", ch);
}

void timeFunc() {
    time_t current_time;

    // Hozirgi vaqtni olish
    current_time = time(NULL);

    // odam o'qiy oladigan shaklda chiqarish
    printf("Hozirgi vaqt: %s", ctime(&current_time));
}

int main() {
    powFunc();
    toLowerFunc();
    timeFunc();
    return 0;
}
