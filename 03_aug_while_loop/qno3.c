#include <stdio.h>
int main(){
   int n,d,d1;
   printf("Enter a number: ");
   scanf("%d",&n);
   while(n){
       d=n%10-(n%100)/10;//4-3=1
       printf("%d\n",d);
       n=n/10;
       d1=(n/100)%10-(n/100)/10;//2-1=1
       printf("%d\n",d1);
       break;
   }
   printf("%d %d",d,d1);
   if(d==d1){printf("%d is a step number.",n);}
       else{printf("%d is a not step number.",n);}
  
}

