#include <stdio.h>
int main(){
  int n1,n2;
  char ch;
  printf("Enter num1 : ");
  scanf("%d",&n1);
  printf("Enter num2 : ");
  scanf("%d",&n2);
  printf("Enter an operation: ");
  scanf(" %c",&ch);
  switch(ch){
      case '+': printf("Sum: %d",n1+n2);break;
      case '-': printf("Sub: %d",n1-n2);break;
      case '*': printf("Mul: %d",n1*n2);break;
      case '/': printf("Div: %d",n1/n2);break;
      case '%': printf("Mod: %d",n1%n2);break;
      default: printf("Invalid input");
  }
    return 0;
}
