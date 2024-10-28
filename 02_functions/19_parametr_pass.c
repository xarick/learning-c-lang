#include <stdio.h>

void updateValue(int *x) {
    *x = 10;
}

int main() {
    int a = 5;
    updateValue(&a);
    printf("a: %d\n", a); // J. a: 10
    return 0;
}
