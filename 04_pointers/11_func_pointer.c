#include <stdio.h>
#include <stdlib.h>

// function pointer — funksiyaga ishora qiluvchi pointer
void funcPointer() {
    printf("func pointer\n");
}

int main()
{
    void (*funcPtr)() = funcPointer;
    funcPtr();

    return 0;
}
