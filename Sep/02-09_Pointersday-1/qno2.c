#include <stdio.h>
void main(){
    int a,b,*p=&a,*q=&b;
    printf("first number : ");
    scanf("%d",&a);
    printf("second number : ");
    scanf("%d",&b);
    printf("The sum of the entered numbers is : %d\n",a+b);
    printf("The sum of the entered numbers is : %d",*p+*q);
    
    
}