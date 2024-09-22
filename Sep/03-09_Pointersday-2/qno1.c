#include <stdio.h>
#include<string.h>
int main(){
    char s[100];
    char *p;
    int  vCount=0,cCount=0;

    printf("Enter any string: ");
    scanf("%s",s);
    p=s;
    while(*p!='\0')   //for(i=0;s[i]!='\0';i++)
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
    return 0;
}