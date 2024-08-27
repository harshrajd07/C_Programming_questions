#include<stdio.h>
int main()
{
    float radius;
    float volume_of_sphere;
    printf("Welcome to Sphere Volume Calculator!: \n");
    printf("Enter the radius of the sphere: \n");
    scanf("%f",&radius);
    volume_of_sphere= 4.0/3.0*3.1416*radius*radius*radius;
    printf("volume_of_sphere is %.2f cubic units: ",volume_of_sphere);
    
    return 0;
}