// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    float v,a,t,d;
    printf("Enter the initial velocity (m/s): \n");
    scanf("%f",&v);
    printf("Enter the acceleration (m/s^2): \n");
    scanf("%f",&a);
    printf("Enter the time (s): \n");
    scanf("%f",&t);
    d = v * t + 1.0/2.0 * a * t * t;
    printf("The distance traveled is %.2f metres. ",d);
    
    return 0;
}