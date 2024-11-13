#include <stdio.h>
#include "16_myheader.h"  // O'zimizning sarlavha faylimizni ulaymiz

// Funksiyalarni yozish
int add(int a, int b) {
    return a + b;
}

double area_of_circle(double radius) {
    return PI * radius * radius;
}

int main() {
    int sum = add(5, 10);
    double area = area_of_circle(3.0);

    printf("Yig'indi: %d\n", sum);
    printf("Doiraning yuzasi: %.2f\n", area);

    return 0;
}
