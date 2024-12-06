#include <stdio.h>
#include <time.h>

void sampleFunction() {
    for (int i = 0; i < 1000000; i++) {
        // Ba'zi hisoblashlar
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Vaqtni o'lchashni boshlash
    start = clock();

    // Funktsiyani chaqirish
    sampleFunction();

    // Vaqtni o'lchashni tugatish
    end = clock();

    // CPU vaqtini hisoblash
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Funktsiyaning ishlash vaqti: %f soniya\n", cpu_time_used);
    
    return 0;
}

// int main() {
//     time_t start, end;

//     // Vaqtni o'lchashni boshlash
//     start = time(NULL);

//     // Funktsiyani chaqirish
//     sampleFunction();

//     // Vaqtni o'lchashni tugatish
//     end = time(NULL);

//     // Vaqtni hisoblash
//     printf("Funktsiyaning ishlash vaqti: %ld soniya\n", (long)(end - start));

//     return 0;
// }

// Qaysi metodni tanlash kerak?
// Agar siz CPU vaqtini (qanchalik protsessor ishlaganini) o'lchamoqchi bo'lsangiz, clock() funksiyasidan foydalaning.
// Agar sizning maqsadingiz real vaqtni (kompyuter ishlayotgan umumiy vaqt) o'lchash bo'lsa, time() funksiyasidan foydalaning.