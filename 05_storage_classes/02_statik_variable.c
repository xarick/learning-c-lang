#include <stdio.h>

// Statik o'zgaruvchilarga qiymat berilmasa, 
// ular avtomatik 0 oladi

// funksiya ichidagi statik o'zbaruvchi
void hisobla() {
    static int son = 0;
    son++;
    printf("Son: %d\n", son);
}

static int globalSon = 10;
void shovGlob() {
    printf("Global son: %d\n", globalSon);
    globalSon++;
    printf("Global son(++): %d\n", globalSon);
}

int main() {
    hisobla();  // Natija: Son: 1
    hisobla();  // Natija: Son: 2

    shovGlob();

    return 0;
}
