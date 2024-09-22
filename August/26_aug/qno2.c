#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    printf("Enter a String : ");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
    }
    printf("The reverse of the String is :");
    while(i) printf("%c",s[--i]);
    //for(i--;i>=0;i--)printf("%c",s[i]);
    
}