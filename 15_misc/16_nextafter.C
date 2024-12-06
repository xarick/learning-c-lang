#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;
    double y = 2.0;

    double result = nextafter(x, y);
    printf("nextafter(%f, %f) = %.20f\n", x, y, result);

    return 0;
}
