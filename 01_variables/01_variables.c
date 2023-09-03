#include <stdio.h>

void variables_one() {
    char a1 = 'H';
    int b = 90, c = 150;
    float _d = 3.4;
    const float PI = 3.14;

    printf("Character value : %c \n",a1);
    printf("Integer value : %d\t%d \n",b,c);
    printf("Float value : %.2f \n",_d);
    printf("PI value : %.2f \n",PI);
}

int main()
{
    variables_one();
    return 0;
}
