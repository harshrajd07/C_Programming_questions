#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
    int i,c=0;
    for(i=1;i<=n;i++)
    {
    if(n%i==0){
        c++;
    }
    }
    if(c==2){
        printf("The number %d is a prime no",n);
    }
    else{
        printf("The number %d is not a prime no",n);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}