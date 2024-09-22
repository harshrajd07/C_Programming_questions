// Online C compiler to run C program online
#include <stdio.h>
int main() 
{   
    int a,b;
    unsigned int c,d,e,f,g,h;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    c = a & b;
    d = a | b;
    e = a ^ b;
    f = ~a;
    g = a << 1;
    h = a >> 1;
    printf("a & b : %u\n",c);
    printf("a | b : %u\n",d);
    printf("a ^ b : %u\n",e);
    printf("~a : %u\n",f);
    printf("a<<1 : %u\n",g);
    printf("a>>1 : %u\n",h);
    
    return 0;
}