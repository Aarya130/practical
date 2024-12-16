
#include <stdio.h>


float calculatePerimeter(float length, float width);
float calculateArea(float length, float width);

int main() {
    float length, width, perimeter, area;


    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);


    perimeter = calculatePerimeter(length, width);
    area = calculateArea(length, width);


    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}


float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}


float calculateArea(float length, float width) {
    return length * width;
}
