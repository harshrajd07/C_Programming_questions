// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    float radius,side,area_of_square,area_of_circle;
    printf("Enter radius of Circle:\n ");
    scanf("%f",&radius);
    printf("Enter side of Square:\n ");
    scanf("%f",&side);
    area_of_circle=3.14*radius*radius;
    area_of_square=side*side;
    printf("Area of Circle is : %.2f\n",area_of_circle);
    printf("Area of Square is : %.0f",area_of_square);
}