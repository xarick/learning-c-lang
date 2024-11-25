#include <stdio.h>

int main() {
    int x = 1, y = 2;

    switch (x) {
        case 1:
            switch (y) {
                case 2:
                    printf("x = 1 va y = 2\n");
                    break;
                default:
                    printf("x = 1, y boshqa qiymat\n");
            }
            break;
        default:
            printf("x boshqa qiymat\n");
    }

    return 0;
}
