#include <stdio.h>

// void use(int* a, int* b, int* restrict c)
// {
// 	*a += *c;
// 	*b += *c;
// }

// restrict ishlatilsa ko'rsatkichlari hech qachon bir xil xotira blokiga murojaat qilmaydi
void add_vectors(int *restrict a, int *restrict b, int *restrict result, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = a[i] + b[i];
    }
}

int main(void)
{
	// int a = 50, b = 60, c = 70;
	// use(&a, &b, &c);
	// printf("%d %d %d", a, b, c);

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int result[5];

    add_vectors(a, b, result, 5);

    printf("Natija: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

	return 0;
}
