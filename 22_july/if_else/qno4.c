#include<stdio.h>
int main(){
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    if(year%4==0 && year%100 !=0 || year%400 ==0)
    printf("It is a leap year.");
    else{
        printf("It is a not a leap year.");
    }
    return 0;
}


/*if(year%4==0 && year%100 !=0 || year%400 ==0)*/