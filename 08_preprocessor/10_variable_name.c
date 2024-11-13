#include <stdio.h>

#define PRINT_VAR_NAME(var) printf("The variable name is '" #var "' and its value is %d\n", var)
#define PI 3.14159

int main() {
    int age = 25;
    
    PRINT_VAR_NAME(age);
    printf("PI ning qiymati: %.5f\n", PI);

    const int MAX_AGE = 100;  // MAX_AGE doimiysi
    printf("Eng katta yosh: %d\n", MAX_AGE);

    return 0;
}
