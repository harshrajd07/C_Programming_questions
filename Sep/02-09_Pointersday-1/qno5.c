#include <stdio.h>
int main(){
    char s[100],*p;
    printf("Enter a string: ");
    scanf("%s",s);
    p=s;
    for(;*p;p++);
    printf("length of the string: %d",p-s);
    
    return 0;
}