#include <stdio.h>
int main() {
   int n1,n2;
   printf(" Enter two numbers: ");
   scanf("%d %d",&n1,&n2);
   if(n1==n2){printf("%d is equl to %d.",n1,n2);}
   else{
   switch(n1>n2){
       case 1 : printf("%d is greater than %d.",n1,n2);break;
       default : printf("%d is greater than %d.",n2,n1);
   }
   }
    return 0;
}