#include<stdio.h>
int main(){
   int r,c,n,a=1;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   { 
   for(c=1;c<=r;c++)
   { 
       if((c+r)%2==0)printf(" 0 ");
       else printf(" 1 ");
   }
   printf("\n");
   }
   return 0;  
}