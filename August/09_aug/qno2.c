#include <stdio.h>
int main() {
   int r,c,nr,nc;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d",&nr,&nc);
   for(r=1;r<=nr;r++)
   {
       for(c=1;c<=nc;c++)
       {
           printf("%2d",r);
       }
       printf("\n");
   }

    return 0;
}