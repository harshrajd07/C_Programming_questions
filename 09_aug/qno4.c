#include <stdio.h>
int main() {
   int n,r,c,a=1;
   printf("Enter the number : ");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   {
       for(c=1;c<=n;c++)
       {
           printf("%3d",a);
           a=a+2;
       }
       printf("\n");
   }

    return 0;
}