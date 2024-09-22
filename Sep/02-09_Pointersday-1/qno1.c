#include <stdio.h>
void main(){
    int a,b,*p=&a,*q=&b;
    printf("Enter a,b values : ");
    scanf("%d%d",&a,&b);
    printf(a>b?"a is big":b>a?"b is big":"both are equal");
    printf(*p>*q?"a is big":*q>*p?"b is big":"both are equal");
    
}