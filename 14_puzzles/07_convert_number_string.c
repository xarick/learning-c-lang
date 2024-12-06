#include <stdio.h>

int main() {
    int num = 12345;
    char str[20]; // Yeterli uzunlikdagi satr uchun joy ajratamiz

    sprintf(str, "%d", num); // Sonni satrga aylantiramiz
    printf("Satr: %s\n", str);

    // itoa(num, str, 10); // 10 - o'nlik tizim
    // printf("Satr: %s\n", str);

    return 0;
}
