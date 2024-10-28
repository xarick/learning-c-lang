#include <stdio.h>
 
float calculateRectangleArea(float length, float width);

int main()
{
    float length = 5.0;
    float width = 3.0;
 
    float area = calculateRectangleArea(length, width);
 
    printf("The area of the rectangle is: %.2f\n", area);
 
    return 0;
}

// prototip ni main() dan oldinga joylash kerak
float calculateRectangleArea(float length, float width)
{
    return length * width;
}
