// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,a,b,c,d,sum;
    printf("Enter a 4 digit number : ");
    scanf("%d",&n);
    a=n/10;
    b=a%10;
    c=a/10;
    d=c%10;
    sum= b+d;
    printf("The sum of 2nd and 3rd digit is : %d",sum);
    
    return 0;
}