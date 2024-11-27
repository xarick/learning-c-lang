#include <stdio.h>

struct Point {
    int x;
    int y;
};

union Data {
    int i;
    float f;
};

int main() {
    // Kompound literal yordamida struktura yaratish
    struct Point p = (struct Point) {10, 20};

    // Struktura a'zolarini chiqarish
    printf("X: %d, Y: %d\n", p.x, p.y);

    // Kompound literal yordamida union yaratish
    union Data d = (union Data) {42};

    // Unionning a'zolarini chiqarish
    printf("Integer: %d\n", d.i);

    return 0;
}
