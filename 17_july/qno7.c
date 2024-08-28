// Online C compiler to run C program online
#include <stdio.h>
int main() 
{   
    int a,b;
    unsigned int c,d,e,f;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    c = a && b;
    d = a || b;
    e = !a;
    f = !b;
    printf("a && b : %u\n",c);
    printf("a || b : %u\n",d);
    printf("!a     : %u\n",e);
    printf("!b     : %u\n",f);
    
    return 0;
}