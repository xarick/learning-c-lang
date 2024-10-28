// C program to demonstrate __func__
#include <stdio.h>

void foo(void) { printf("1. func - %s\n", __func__); }
void bar(void) { printf("2. func - %s\n", __func__); }

int main()
{
	foo();
	bar();

    printf("3. line - %s\n", __FILE__);
    printf("4. line - %d", __LINE__);
	return 0;
}
