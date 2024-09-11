#include <stdio.h>
int main() {
   int n,r,c,a=1;
   printf("Enter the number : ");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   {
       for(c=1;c<=n;c++)
       {
         if(c%2==0)printf("%3d",a-1);
         else printf("%3d",a);
       }
       printf("\n");
   }

    return 0;
}