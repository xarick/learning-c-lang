#include <stdio.h>

// global o'zgaruvchiga boshlang'ich qiymar berish kerak
int a = 5;
static int b = 10;

// extern kalit so'zi yordamida o'zgaruvchi boshqa faylda e'lon qilinganligini bildiradi
// alohida xotiradan joy ajratmaydi, faqat boshqa faylda bo'lmasa xatolik bo'ladi
extern int c;

int main() {
   c = 20;
   printf("The value of global variable a : %d \n", a);
   printf("The value of global static variable b : %d \n", b);
   printf("The value of global extern variable c : %d \n", c);
   return 0;
}