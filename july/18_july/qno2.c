#include<stdio.h>
int main(){
    int unit;
    printf("Enter the number of units consumed: \n");
    scanf("%d",&unit);
    (unit<=100) ? printf("The rate per unit is Rs. 3.00 and the bill is %.2f . \n",unit*3.00) : printf("The rate per unit is Rs. 4.50 and the bill is %.2f .\n",(100*3)+((unit-100)*4.50));

    return 0;
}