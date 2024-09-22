#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    printf("Enter The string .");scanf("%s",s1);
    strcpy(s2,s1);
    strrev(s2);
    printf(stricmp(s1,s2)==0?"Pallindrome":"Not a Pallindrome");
    return 0;
}