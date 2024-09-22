#include <stdio.h>
int main(){
    long n;
    int i,sum1=0,sum2=0,r1,r2;
    printf("Enter a number:");
    scanf("%ld",&n);
    while(n!=0){
        r1=n%10;
        sum1=sum1+r1;
        n=n/10;
        }
        n=sum1;
        while(n!=0){
        r2=n%10;
        sum2=sum2+r2;
        n=n/10;
        }
        printf("sum: %d",sum2);
        
    return 0;
}

