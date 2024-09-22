#include<stdio.h>
int main(){
    int n;
    printf("Enter month no between 1-12 : \n");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    {printf("Number of days: 31");}
    else if(n==4 || n==6 || n==9 || n==11)
    {printf("Number of days: 30");}
    else if(n==2)
    {printf("Number of days: 28/29");}
    else{printf("Invalid Month");}

}


/*
1,3,5,7,8,10,12
4,6,9,11
2   
*/