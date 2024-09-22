#include<stdio.h>
int main()
{
float r,h;
printf("Enter the radius of the cylinder: \n");
scanf("%f",&r);
printf("Enter the height of the cylinder: \n");
scanf("%f",&h);
float pi=3.1416,A;
A=2*pi*r*r + 2*pi*r*h;
printf("Radius:%.2f \n",r);
printf("Height:%.2f \n",h);
printf("Surface_Area:%.2f ",A);

}