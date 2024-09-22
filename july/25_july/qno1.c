#include<stdio.h>
int main(){
    int a,c,f,d;
    float h;
    char ch;
    printf("Whether customer has VIP pass : \n");
    scanf("%c",&ch);
    printf("Enter age of customer: \n");
    scanf("%d",&a);
    printf("Enter height in cm : \n");
    scanf("%0.2f",&h);
    if(a<=3){c=0;}
    else if(a>=4 && a<=12){c=20;}
    else if(a>=13 && a<=64){c=100;}
    else{c=50;}
    if(h<120){c*=0.50;}
    else if(h>180){c+=50;}
    else {d=0;}
    f=c+d;
    if(ch=='y'){f*=0.9;}
    printf("The customer's age : %d, height : %.2f, and VIP pass status : %c\n .",a,h,ch);
    printf("Base Ticket price : %d , Discounts: %.2d\n ",c,d);
    printf("Final Ticket price: %d",f);
    
}
    
    
    