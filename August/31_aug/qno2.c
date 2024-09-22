#include<stdio.h>
#include<stdio.h>
int main(){
    char s[100],s2[100];
    int i=0,n,t=0;
    printf("Enter a string: ");
    scanf("%s",s);
    for(n=0;s[n]!='\0';n++){
        if(s[n]=='A' || s[n]=='a' || s[n]=='E' || s[n]=='e' || s[n]=='I' || s[n]=='i' || s[n]=='O' || s[n]=='o' || s[n]=='U' || s[n]=='u')
        s2[t++]=s[n];
    }
    for(i=0;i<n;i++){
         if(s[i]=='A' || s[i]=='a' || s[i]=='E' ||s[i]=='e' ||s[i]=='I' || s[i]=='i' ||s[i]=='O' ||s[i]=='o' ||s[i]=='U' ||s[i]=='u')
         s[i]=s2[--t];
    }
    for(i=0;i<n;i++){
        printf("%c",s[i]);
    }
    return 0;
    
}