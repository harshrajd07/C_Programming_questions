#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter the lengths of the sides of the triangle: \n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if (side3 < (side1 + side2)){
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
        }

    return 0;

}
