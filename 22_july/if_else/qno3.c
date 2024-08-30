#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the first integer: \n");
    scanf("%d",&n1);
    printf("Enter the second integer: \n");
    scanf("%d",&n2);
    if(n1%n2==0){
        printf("%d is divisible by %d.",n1,n2);
    }
    else{
        printf("%d is not divisible by %d.",n1,n2);
    }

    return 0;
}