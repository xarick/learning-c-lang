#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
    // float a = 3.14;
    // int b = (int)a; // 3 bo'ladi
	// printf("The result is %d\n", b); 

    // string to float
    // char str[] = "3.14";
    // float num = atof(str);
    // printf("Float qiymat: %f\n", num);

    // string to long
    // char str[] = "123456";
    // long num = atol(str);
    // printf("Long qiymat: %ld\n", num);

    // int to string
    // int num = 123;
    // char str[10];
    // itoa(num, str, 10); // 10 - o‘nlik tizim
    // printf("String qiymat: %s\n", str);

    // int to string 2-usul
    // int num = 123;
    // char str[10];
    // sprintf(str, "%d", num);
    // printf("String qiymat: %s\n", str);

    // string to int
    char str[] = "123";
    int num = atoi(str);
    printf("Int qiymat: %d\n", num);

	return 0; 
}
