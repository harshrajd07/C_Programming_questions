#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100];
    int i,j;
    printf("Enter a String: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    for(j=0;j<i/2;j++)
    {
    if(tolower(s[j])!=tolower(s[i-j-1]))
    {printf("Not a pallindrome"); return 0;}
    }
    printf("Pallindrome");
    return 0;
    }
    
}