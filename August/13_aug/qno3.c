#include<stdio.h>
int main(){
   int r,c,n=4,a=0,b=1,next;
   for(r=1;r<=n;r++)
   { 
   for(c=1;c<=r;c++)
   {  next=a+b;
       printf("%3d",next);
       a=b;
       b=next;
   }
  printf("\n");
   }
   return 0;  
}
