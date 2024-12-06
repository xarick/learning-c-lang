#include <stdio.h>
#include <math.h>

int roundNumber(float num) {
    return (int)(num + 0.5); // Yaxlitlash
}

int main() {
    float num = 4.7;
    printf("Yaxlitlangan son: %d\n", roundNumber(num));
    return 0;
}
