#include<stdio.h>
int x = 10;
 
int c()
{
   return x;
}

int b()
{
   int x = 22;
   return c();
}
 
int main()
{
  printf("%d", b()); // javob: 10
  printf("\n");
  return 0;
}