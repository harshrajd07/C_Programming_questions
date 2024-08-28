// Online C compiler to run C program online
#include <stdio.h>
int main() 
{   
    int a,b;
    unsigned int c,d,e,f,g;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    c = a += b;
    d = a -= b;
    e = a *= b;
    f = a /= b;
    g = a %= b;
    printf("a += b : %u\n",c);
    printf("a -= b : %u\n",d);
    printf("a *= b : %u\n",e);
    printf("a /= b : %u\n",f);
    printf("a %= b : %u\n",g);
    
    return 0;
}