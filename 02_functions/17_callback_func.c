#include <stdio.h>

// Callback funksiyasi
void printResult(int result) {
    printf("Natija: %d\n", result);
}

void performOperation(int a, int b, void (*callback)(int)) {
    int sum = a + b;
    callback(sum);
}

int main() {
    performOperation(5, 10, printResult);
    return 0;
}
