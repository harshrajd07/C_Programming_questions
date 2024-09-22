#include<stdio.h>
int main(){
   int r,c,n,a=1;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   { 
   for(c=1;c<=r;c++)
   { 
       if(c==1)printf(" 0 ");
       else if(c==2 || c==3)printf(" 1 ");
       else if(c==n-1)printf(" 2 ");
       else printf(" 3 ");
   }
  printf("\n");
   }
   return 0;  
}