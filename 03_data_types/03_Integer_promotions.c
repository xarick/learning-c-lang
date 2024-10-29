#include <stdio.h>

int main()
{
	char a = 0xfb;
	unsigned char b = 0xfb;

	printf("a = %c\n", a);
	printf("(int)a = %c\n", (int)a);
	printf("b = %c\n", b);
	printf("(int)b = %c\n", (int)b);

	if (a == b)
	    printf("Same\n");
	else
	    printf("Not Same");

    // a = -5
    // b = 251

	return 0;
}
