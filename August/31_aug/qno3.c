#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    printf("Enter a String : ");
    scanf("%[^\n]s",s);
    for(i=0;i<s[i]!='\0';i++)
    {
    }
    printf("The reverse of the String is :");
    while(i) printf("%c",s[--i]);
    
}