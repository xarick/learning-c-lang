#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int v[3] = { 10, 100, 200 };
    int* ptr;
    ptr = v;

    for (int i = 0; i < 3; i++) {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        ptr++;
    }

     int myArray[5] = {1, 2, 3, 4, 5};
    printArray(myArray, 5);

    return 0;
}
