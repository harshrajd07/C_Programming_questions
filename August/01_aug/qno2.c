#include <stdio.h>
int main(){
    long n;
    int c=0;
    printf("Enter  digit number: ");
    scanf("%ld",&n);//m=n
    while(n!=0){
     c++;
     n=n/10;
    }
    printf("Count of the digits : %d",c);
    return 0;
}