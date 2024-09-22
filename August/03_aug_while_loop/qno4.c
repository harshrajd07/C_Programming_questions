#include <stdio.h>
int main(){
   int n,sum1=0,sum2=0,r1,r2;
   printf("Enter a number: ");
   scanf("%d",&n);
   while(n){
      r1=n%10;
      sum1=sum1+r1;
      n=n/10;
      r2=n%10;
      sum2=sum2+r2;
      n=n/10;
      }
      printf("%d %d\n",sum1,sum2);
      if(sum1==sum2){printf("Alternate digit sum is same.");}
      else{printf("Alternate digit sum is different.");}
}
      
