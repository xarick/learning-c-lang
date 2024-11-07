#include <stdio.h>

int main() {
    const int yosh = 25;
    printf("Yosh: %d\n", yosh);

    const int *ptr;  // Ko‘rsatkich o‘zgaruvchisi orqali qiymat o‘zgartirilmaydi
    int *const ptr;  // Ko‘rsatkichning manzili o‘zgartirilmaydi, lekin qiymati o‘zgarishi mumkin
    const int *const ptr;  // Ko‘rsatkich ham, qiymat ham o‘zgarmas


    return 0;
}
