#include <stdio.h>

#define PRINT_SUM_AND_DIFF(a, b) \
    printf("Yig‘indi: %d\n", (a) + (b)); \
    printf("Farq: %d\n", (a) - (b))

int main() {
    PRINT_SUM_AND_DIFF(10, 5);
    return 0;
}
