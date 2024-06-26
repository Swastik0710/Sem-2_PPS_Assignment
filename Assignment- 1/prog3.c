//Write a C program to enter length and breadth of a rectangle and radius of a circle. Find perimeter and area of rectangle and circumference and area of circle.
#include<stdio.h>
#include<math.h>
#define PI 3.14285
int main()
{
    float length,breadth,radius;
    float rectangle_perimeter,rectangle_area,circle_circumference,circle_area;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    printf("\nEnter the radius of the circle: ");
    scanf("%f",&radius);
    rectangle_perimeter = 2*(length + breadth);
    rectangle_area = length*breadth;
    circle_circumference = 2*PI*radius;
    circle_area = (PI*(pow(radius,2)));
    printf("\nThe perimeter of the rectangle is %.2f.",rectangle_perimeter);
    printf("\nThe area of the rectangle is %.2f.",rectangle_area);
    printf("\nThe circumference of the circle is %.2f.",circle_circumference);
    printf("\nThe area of the circle is %.2f.",circle_area);
    return 0;
}