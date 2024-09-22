#include<stdio.h>
int main(){
   int r,c,n,a=1;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   { 
   for(c=1;c<=r;c++)
   {  
       if(r==c)printf(" A ");
       else if(c==r-1)printf(" B ");
       else if(c==r-2)printf(" C ");
       else if(c==r-3)printf(" D ");
       else printf(" E ");
   }
  printf("\n");
   }
   return 0;  
}