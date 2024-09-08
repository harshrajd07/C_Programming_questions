#include <stdio.h>
int main(){
   int n,l,sqr,sum;
   printf("Enter a number: ");
   scanf("%d",&n);
   sqr=n*n;
   while(sqr){
       l=sqr%10;
       sum=sum+l;
       sqr=sqr/10;
   }
   printf("sum = %d\t input number = %d\n",sum,n);
   if(sum==n)printf("%d is a neon number. ",n);
   else printf("%d is not a neon number. ",n);
   
}