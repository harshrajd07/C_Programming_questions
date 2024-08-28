// Online C compiler to run C program online
#include <stdio.h>
int main() 
{   
    int x,y;
    unsigned int c,d,e,f,g,h;
    printf("Enter two numbers: ");
    scanf("%d,%d",&x,&y);
    c = x==y;
    d = x!=y;
    e = x>y;
    f = x<y;
    g = x>=y;
    h = x<=y;
    printf("x==y : %u\n",c);
    printf("x!=y : %u\n",d);
    printf("x>y  : %u\n",e);
    printf("x<y  : %u\n",f);
    printf("x>=y : %u\n",g);
    printf("x<=y : %u\n",h);
    
    return 0;
}