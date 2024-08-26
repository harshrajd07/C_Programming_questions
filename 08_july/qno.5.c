// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    (a>b)&&(a>c) && printf("%d",a) || (b>c) && printf("%d",b) || printf("%d",c);
    
    return 0;
}
