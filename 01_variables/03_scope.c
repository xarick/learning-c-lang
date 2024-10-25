#include<stdio.h>
int global = 1;
 
int main()
{
  printf("%d \n", global);
  int local = 2;
  {
    int local = 3;
    printf("%d \n", local);
  }
  return 0;
}