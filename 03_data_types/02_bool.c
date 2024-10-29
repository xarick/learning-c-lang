#include <stdbool.h>

int main()
{
    bool a = true;
    printf("True : %d", a);

    return 0;
}

// define yoki enum bilan ishlatish mumkin,
// lekin eng yaxshi usul yuqoridagi hisoblanadi

// typedef enum { false, true } bool;
// bool b = false;
// printf("True : %d\n", b);

// #define bool int
// #define false 0
// #define true 1