#include <stdio.h>

// global o'zgaruvchiga boshlang'ich qiymar berish kerak
int a = 5;
static int b = 10;

int main() {
   printf("The value of global variable a : %d \n", a);
   printf("The value of global static variable b : %d \n", b);
   return 0;
}