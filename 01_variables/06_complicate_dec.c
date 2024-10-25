#include <stdio.h>

char func1() { return 'a'; }
char func2() { return 'b'; }
char func3() { return 'c'; }

char (*xarr[])() = { func1, func2, func3 };
char (*(*x())[])() { return &xarr; }

int main()
{
	printf("%c\n", ((*(x()))[0])());
	printf("%c\n", ((*(x()))[1])());
	printf("%c\n", ((*(x()))[2])());
	return 0;
}

// 2 - misol
// void (*f[10])(int, int);
// void func1(int a, int b)
// {
// 	printf("func1 = %d, %d\n", a, b);
// }

// void func2(int p, int q)
// {
// 	printf("func2 = %d, %d\n", p, q);
// }

// void func3(int x, int y)
// {
// 	printf("func3 = %d, %d\n", x, y);
// }

// int main()
// {
// 	f[0] = func1;
// 	f[1] = func2;
// 	f[2] = func3;
// 	(*f[0])(1, 2);
// 	(*f[1])(3, 4);
// 	(*f[2])(5, 6);
// 	return 0;
// }

// 1 - misol
// int (*daytab)[13];
// int arr[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

// int main()
// {
//     daytab = &arr;
//     printf("arr[2] = %d\n", (*daytab)[2]);
//     return 0;
// }