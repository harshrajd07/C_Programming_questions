#include <stdio.h>
int main() 
{
    int h,r;
    printf("Enter the radius of a cylinder: \n");
    scanf("%d",&r);
    printf("Enter the height of a cylinder: \n");
    scanf("%d",&h);
    float PI=3.144,A;
    A = 2*PI*r*r + 2*PI*r*h;
    printf("Radius: %d\n",r);
    printf("Height: %d\n",h);
    printf("Surface Area: %.2f\n",A);
    
    return 0;
}


// a = 2*pi*r*r  + 2*pi*r*h