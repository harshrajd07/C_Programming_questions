#include<stdio.h>
int main(){
    int n;
    printf("Enter a number. \n");
    scanf("%d",&n);
    n % 2 == 0 ? printf("The number %d is even.",n) : printf("The number %d is odd.",n);
  
  return 0;
}