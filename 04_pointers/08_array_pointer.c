#include <stdio.h>
#include <stdlib.h>

// array pointer - massivning birinchi elementiga ishora qiluvchi pointer
int main()
{
    int arr[3] = {1, 2, 3};
    int *ptr = arr;  // arr[0] ning manzilini saqlaydi

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }
    
    printf("\n");

    return 0;
}