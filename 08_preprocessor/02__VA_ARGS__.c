#include <stdio.h>

#define PRINTF(format, ...) printf(format, __VA_ARGS__)

int main() {
    PRINTF("Bu birinchi raqam: %d\n", 10);
    PRINTF("Bu ikkinchi va uchinchi raqamlar: %d, %d\n", 20, 30);

    return 0;
}
