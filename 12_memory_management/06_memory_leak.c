#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(10 * sizeof(int)); // Xotira ajratish
    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik!\n");
        return 1;
    }

    // Xotirani ishlatish
    for (int i = 0; i < 10; i++) {
        ptr[i] = i + 1;
    }

    // Xotira bo'shatish
    free(ptr);
    ptr = NULL; // Pointerni NULL ga tenglashtirish

    // Xotira bo'shatilganidan keyin ko'rsatkichni NULL ga tenglashtirish, 
    // kelajakda tasodifiy xotira bloklariga murojaat qilishning oldini olishga yordam beradi

    return 0;
}
