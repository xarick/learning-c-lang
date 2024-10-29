#include <stdio.h>

// name             bayt    code    min             max
// char             1	    %c      -128	        127
// unsigned char	1	    %c      0	            255

// short	        2       %hd     -32,768	        32,767
// unsigned short	2	    %hu     0	            65,535

// int	            4	    %d      -2,147,483,648	2,147,483,647
// unsigned int	    4	    %u      0	            4,294,967,295

// long	            4       %ld
// long long	    8       %lld 

// float	        4	    %f      ~1.2 × 10^-38	~3.4 × 10^38
// double	        8	    %lf     ~2.3 × 10^-308	~1.7 × 10^308
// long double	    8       %Lf 

int main()
{
    int a = 9;
    int b = -9;

    // U - unsigned 
    int c = 89U;

    // L - Long
    long int d = 99998L;

    // UL -  unsigned long
    // LL - long long

    // f - qo'yilmasa double deb ko'radi va xotiradan ko'p joy oladi
    // float a = 3.14f;

    printf("positive data: %d\n", a);
    printf("negative data: %d\n", b);
    printf("unsigned int data: %u\n", c);
    printf("long int data: %ld\n", d);

    // char
    char ch = 'a';
    printf("Value of a: %c\n", ch);
    char val;

    ch++;
    printf("Value of a after increment is: %c\n", ch);
    printf("Value of a after increment is: %d\n", (int)ch);

    val = 99;
    printf("Value of c: %c\n", val);

    // float
    float f_b = 2.5f;
    // 2x10^-4
    float f_c = 2E-4f;
    printf("%f\n", f_b);
    printf("%.2f\n", f_b);
    printf("%f\n", f_c);

    // double
    double d_c = 2312312312.123123;
    printf("%lf\n", d_c);

    // void
    int void_val = 30;
    void* ptr = &void_val;
    printf("void: %d\n", *(int*)ptr);

    // sizeof
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);

    printf("The size of int data type : %d\n", size_of_int);
    printf("The size of char data type : %d\n", size_of_char);

    // long double - 16 bayt
    long double var;
    printf("Size of long double: %d", sizeof(long double)); 

    return 0;
}
