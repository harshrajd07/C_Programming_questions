#include<stdio.h>
int main(){
   int n;
   printf("Enter the amount: \n");
   scanf("%d",&n);
   if(n/500!=0){printf("Rs. 500 notes : %d\n",n/500);}n=n%500;
   if(n/100!=0){printf("Rs. 100 notes : %d\n",n/100);}n=n%100;
   if(n/50!=0){printf("Rs. 50 notes : %d\n",n/50);}n=n%50;
   if(n/20!=0){printf("Rs. 20 notes : %d\n",n/20);}n=n%20;
   if(n/10!=0){printf("Rs. 10 notes : %d\n",n/10);}n=n%10;
   if(n/5!=0){printf("Rs. 5 notes : %d\n",n/5);}n=n%5;
   if(n/2!=0){printf("Rs. 2 notes : %d\n",n/2);}n=n%2;
   if(n/1!=0){printf("Rs. 1 notes : %d\n",n/1);}n=n%1;
   
}