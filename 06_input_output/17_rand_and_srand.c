#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // agar bu bo'lmasa birinchi qiymat bir xil bo'ladi
    srand(time(NULL));  // Vaqt asosida yangi boshlang‘ich nuqtani o‘rnatadi

    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}

// rand() funksiyasi tasodifiy butun sonlarni hosil qiladi.
// srand() – rand() funksiyasining boshlang‘ich nuqtasini o‘rnatadi.
// Agar dasturda har safar boshqacha tasodifiy sonlar olish kerak bo‘lsa, srand(time(NULL)); dan foydalanish tavsiya etiladi.
