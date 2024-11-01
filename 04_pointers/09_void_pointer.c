#include <stdio.h>
#include <stdlib.h>

// void pointer - nomalum turdagi pointer
void voidPointer(void *ptr, char type) {
    if (type == 'i')
        printf("%d\n", *(int *)ptr);
    else if (type == 'f')
        printf("%f\n", *(float *)ptr);
}

int main()
{
    float v_b = 3.5;
    voidPointer(&v_b, 'f');

    return 0;
}