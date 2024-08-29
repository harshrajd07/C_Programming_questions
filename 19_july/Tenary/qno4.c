#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers : \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    (n1>n2) && (n1>n3) ? printf("The number %d is smallest",n2) : printf("The number %d is smallest",n3);
    
    
}