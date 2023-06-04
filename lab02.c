// WAP in C to read three sides of a triangle and find our its area.
#include<stdio.h>
#include<math.h>

int main()
{
    float side1, side2, side3, s, area;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    s = (side1 + side2 + side3) / 2;

    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    printf("Area of triangle having sides: %0.2f %0.2f %0.2f is %0.2f ", side1, side2, side3, area);

    return 0;
}