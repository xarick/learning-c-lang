// goto operatori o'rniga break, continue, yoki funksiyalardan foydalanish yaxshiroq, 
// chunki ular kodni tushunarliroq qiladi

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 3 && j == 3) {
                goto tugadi; // Hammasidan chiqadi
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

    tugadi:
    printf("Sikldan chiqildi.\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 3 && j == 3) {
                printf("Sikldan chiqildi.\n");
                return 0; // Shunchaki sikldan chiqish
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}
