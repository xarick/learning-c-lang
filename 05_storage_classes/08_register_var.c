// register kalit so'zi o'zgaruvchini protsessor registriga joylashtirish uchun ishlatiladi, bu esa uni tezroq kirish imkonini beradi. Biroq, bu faqat tavsiya bo'lib, kompilyator xotirada joylashishini ham tanlashi mumkin

#include <stdio.h>
#include <time.h>

// int main() {
//     register int i;  // i o‘zgaruvchisi registrda saqlanishi taklif qilinmoqda
//     int sum = 0;

//     for (i = 0; i < 1000000; i++) {
//         sum += i;
//     }

//     printf("Sum: %d\n", sum);
//     return 0;
// }

int main() {
    // Register bilan e'lon qilish
    clock_t start_register, end_register;
    register int i;
    int sum_register = 0;

    start_register = clock();  // Vaqtni o‘lchashni boshlash
    for (i = 0; i < 10000000; i++) {
        sum_register += i;
    }
    end_register = clock();  // Vaqtni o‘lchashni tugatish

    double time_register = ((double) (end_register - start_register)) / CLOCKS_PER_SEC;
    printf("Register bilan summani hisoblash vaqti: %.9f soniya\n", time_register);

    // Registersiz (xotiradagi) o‘zgaruvchi bilan e'lon qilish
    clock_t start_no_register, end_no_register;
    int sum_no_register = 0;

    start_no_register = clock();  // Vaqtni o‘lchashni boshlash
    for (i = 0; i < 10000000; i++) {
        sum_no_register += i;
    }
    end_no_register = clock();  // Vaqtni o‘lchashni tugatish

    double time_no_register = ((double) (end_no_register - start_no_register)) / CLOCKS_PER_SEC;
    printf("Registersiz summani hisoblash vaqti: %.9f soniya\n", time_no_register);

    return 0;
}
