//  statik funksiyalar — faqat e'lon qilingan faylda ishlatiladi
#include <stdio.h>

static void displayMessage() {
    printf("Bu statik funksiya!\n");
}

int main() {
    displayMessage();
    return 0;
}