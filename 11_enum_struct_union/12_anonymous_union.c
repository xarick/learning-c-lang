#include <stdio.h>

int main() {
    // Nomlanmagan union
    union {
        int x;
        float y;
    } data;

    data.x = 10;
    printf("X: %d\n", data.x);

    data.y = 20.5;
    printf("Y: %.2f\n", data.y);

    return 0;
}
