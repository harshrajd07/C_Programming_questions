#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    printf("Before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
    return 0;
}
 
