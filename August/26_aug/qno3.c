#include<stdio.h>
#include<string.h>
int main(){
    char s[100]; 
    int Temp;
    int i, j, len;
    printf("Enter any string : ");
    scanf("%s",s);
    len = strlen(s);
    for(i=0;i<len;i++)
    {
        for(j=0;j<(len-1); j++)
        {
            if(s[j]>s[j+1])
            {
                Temp=s[j];
                s[j]=s[j+1];
                s[j+1] =Temp;
            }
        }
    }
    printf("After Sorting the String is : %s",s);
    return 0;
}