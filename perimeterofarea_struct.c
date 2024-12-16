#include <stdio.h>


struct Rectangle
 {
    float length;
    float width;
};


float calPeri(struct Rectangle rect);
float calArea(struct Rectangle rect);

int main()
{
    struct Rectangle rect;


    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);


    float perimeter = calPeri(rect);
    float area = calArea(rect);


    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}



float calPeri(struct Rectangle rect)
{
    return 2 * (rect.length + rect.width);
}


float calArea(struct Rectangle rect)
{
    return rect.length * rect.width;
}
