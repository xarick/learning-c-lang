#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // 3-ni o'tkazib yuboradi
        }
        printf("%d\n", i);
    }
    return 0;
}
