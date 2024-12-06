#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;
    long double y = 2.0;

    double result = nexttoward(x, y);
    printf("nexttoward(%f, %Lf) = %.20f\n", x, y, result);

    return 0;
}
