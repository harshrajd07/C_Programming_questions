#include<stdio.h>
int main()
{
    char ch,ch1;
    printf("Enter a character:\n ");
    scanf("%c %c",&ch,&ch1);
    printf("ASCII value %c is :%d\n ",ch,ch);
    printf("ASCII value %c is :%d\n ",ch1,ch1);
    printf("ASCII sum of %c & %c is :%d\n ",ch,ch1,ch+ch1);
}