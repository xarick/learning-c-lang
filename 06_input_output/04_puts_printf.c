// puts(): Faqat bir satrdagi matnni chiqaradi va oxirida yangi qator qo'shadi (yani \n)

// printf(): Matnni chiqarishda mos keluvchi format specifierlarni qo'llash imkonini beradi, 
// lekin yangi qator qo'shmaydi

#include <stdio.h>


// Faqat oddiy matnni chiqarish kerak bo'lganda puts() dan foydalanish tavsiya etiladi
int main() {
    puts("Assalomu alaykum");  // Satrni chiqaradi va yangi qatordan davom etadi

    int yosh = 25;
    printf("Mening yoshim %d\n", yosh);

    return 0;
}
