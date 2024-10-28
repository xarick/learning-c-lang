#include <stdio.h>
 
void compare(int a, int b, int* add_great, int* add_small)
{
    if (a > b) {
        *add_great = a;
        *add_small = b;
    }
    else {
        *add_great = b;
        *add_small = a;
    }
}

void findGreaterSmaller(int a, int b, int arr[])
{
    if (a > b) {
        arr[0] = a;
        arr[1] = b;
    }
    else {
        arr[0] = b;
        arr[1] = a;
    }
}
 
int main()
{
    int great, small, x, y;
 
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

    // pointer bilan
    compare(x, y, &great, &small);
    printf("\nThe greater number is %d and the smaller number is %d", great, small);

    // massiv bilan
    int arr[2];
    findGreaterSmaller(x, y, arr);
    printf("\nThe greater number is %d and the smaller number is %d", arr[0], arr[1]);
 
    return 0;
}