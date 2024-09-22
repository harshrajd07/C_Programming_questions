#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,n,s=0;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='0') && (str[i]<='9'))
        {
            s=s+(str[i]-'0');
        }
    }
    printf("Sum of the numbers is : %d",s);
    
    return 0;
}