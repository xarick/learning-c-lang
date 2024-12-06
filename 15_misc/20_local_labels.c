#include <stdio.h>

void checkNumbers() {
    int num = 0;
    
    loop_start:  // Local label for loop
    
    printf("Enter a number (0 to quit): ");
    scanf("%d", &num);
    
    if (num == 0) {
        goto loop_end;  // Exit the loop when number is 0
    }
    
    printf("You entered: %d\n", num);
    goto loop_start;  // Jump back to loop_start to ask for another number

    loop_end:  // Local label for exit
    printf("Loop terminated.\n");
}

int main() {
    checkNumbers();
    return 0;
}
