#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    printf("Kvadrat ildiz: %.2f\n", sqrt(x));  // 3.00

    double result = pow(2.0, 3.0);  // 2 ning 3-darajasi
    printf("Natija: %.2f\n", result);  // 8.00

    double angle = 3.14159 / 2;  // 90 daraja (radianlarda)
    printf("Sin: %.2f\n", sin(angle));  // 1.00
    printf("Cos: %.2f\n", cos(angle));  // 0.00
    printf("Tan: %.2f\n", tan(angle));  // 16331239353195370.00

    double result2 = fabs(-5.0);
    printf("Mutlaq qiymat: %.2f\n", result2);  // 5.00

    double result3 = ceil(3.14);
    printf("Yuqoriga yaxlitlangan: %.2f\n", result3);  // 4.00

    double result4 = floor(3.99);
    printf("Pastga yaxlitlangan: %.2f\n", result4);  // 3.00

    // Bu funksiya x va y sonlari orasidagi qoldiqni hisoblaydi
    double result5 = fmod(5.5, 2.0);
    printf("Qoldiq: %.2f\n", result5);  // 1.50

    return 0;
}
