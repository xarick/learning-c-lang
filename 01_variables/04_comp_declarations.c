#include <stdio.h>
int (*fp)();
int func(void) { 
    printf("hello\n"); 
    return 0;
}

int (*comdec)[13];
int arr[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

void myFunc() {
    fp = func;
    (*fp)();
}

void myFunc2() {
    comdec = &arr;
    printf("arr[2] = %d\n", (*comdec)[2]);
    return;
}

int main()
{
    myFunc();
    myFunc2();
    return 0;
}
