#include <stdio.h>
int main(){
    long n;
    int r;
    printf("Enter a number: ");
    scanf("%ld",&n);
    if(n<0) printf("-",n=-n);
    do{
    r=n%10;printf("%d",r);
    n=n/10;
    }while(n);

}