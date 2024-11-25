#include <stdio.h>

int main() {
    int x = 5;
    // switch bilan range ishlatishning alternativa yo'li
    if (x >= 1 && x <= 3) {
        printf("X 1 dan 3 gacha\n");
    } else if (x >= 4 && x <= 6) {
        printf("X 4 dan 6 gacha\n");
    } else if (x >= 7 && x <= 10) {
        printf("X 7 dan 10 gacha\n");
    } else {
        printf("X boshqa qiymat\n");
    }

    // switch ichida range ishlatish
    switch (x) {
        case 1: case 2: case 3:
            printf("X 1 dan 3 gacha\n");
            break;
        case 4: case 5: case 6:
            printf("X 4 dan 6 gacha\n");
            break;
        case 7: case 8: case 9: case 10:
            printf("X 7 dan 10 gacha\n");
            break;
        default:
            printf("X boshqa qiymat\n");
    }
    return 0;
}
