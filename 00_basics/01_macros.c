#include <stdio.h>
// ushbu macros qiymati preprocessor tomonidan o'qib olinadi
#define PI 3.1415 
#define Area(l,b) (l * b)

void macros_one() {
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = PI*radius*radius;

    printf("Area=%.2f \n",area);
    return;
}

void macros_two() {
    int length = 15, breadth = 20, rect_area;
    rect_area = Area(length,breadth);
    printf("Area of the rectangle : %d \n",rect_area);
    return;
}

void macros_standart() {
    printf("Current File :%s\n", __FILE__);
    printf("Current Date :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Line Number :%d\n", __LINE__);
    return;
}

int main()
{
    macros_one();
    macros_two();
    macros_standart();
    return 0;
}
