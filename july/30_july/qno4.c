#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: \n");
  scanf("%d",&n);
  switch(n%2==0){
      case 1: printf("Even.\n");break;
      default: printf("Odd.\n");break;
  }
  
    return 0;
}