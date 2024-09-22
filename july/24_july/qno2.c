#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter the lengths of the sides of the triangle : ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3){printf("The triangle is an equilateral triangle.");}
    else if(side1==side2 || side1==side3){printf("The triangle is an isosceles triangle.");}
    else{printf("The triangle is an scalene triangle.");}

}
