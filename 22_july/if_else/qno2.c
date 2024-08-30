#include<stdio.h>
int main(){
    int n,lastdigit;
    printf("Enter a number: \n");
    scanf("%d",&n);
    lastdigit = n%10;
    if(lastdigit<5){
        printf("%d",n*n);
    }
    else{
        printf("%d",n);
    }
    return 0;
}