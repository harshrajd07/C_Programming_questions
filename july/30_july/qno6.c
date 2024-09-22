#include <stdio.h>
int main(){
  int m1,m2,m3,m4,m5,a;
  float percentage,sum;
  char grade;
  printf("Enter the marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer: ");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  sum=m1+m2+m3+m4+m5;
  percentage = (sum/500)* 100;
  a=percentage/10;
  switch(a){
      case 9 : printf("Grade A");break;
      case 8 : printf("Grade B");break;
      case 7 : printf("Grade C");break;
      case 6 : printf("Grade D");break;
      case 4 : case 5 : printf("Grade E");break;
      default: printf("Grade F");
  }
 
    return 0;
}