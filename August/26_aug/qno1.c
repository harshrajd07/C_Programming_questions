#include<stdio.h>
#include<string.h>
int main()
{
int i,vowel=0,consonant=0,special=0,digits=0;
char s[100];
printf("Enter string : ");
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
    if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||
    s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
    {
        vowel++;
    }
    
    else if(s[i]>=0&&s[i]<=47||s[i]>=58&&s[i]<=64||
    s[i]>=91&&s[i]<=96||s[i]>=123&&s[i]<=127)
    {
        special++;
    }

    else if(s[i]>'0'&&s[i]<'9')
    {
        digits++;
    }
}
printf("vowel count is : %d\n",vowel);
printf("consonant count is : %d\n",strlen(s)-vowel-special-digits);
printf("digits count is : %d\n",digits);
printf("Special Characters is : %d\n",special);

}