#include <stdio.h>
#include<ctype.h>
    int main(){
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
    if(ch>=97 && ch<=122){
    printf(" %c is a Lowercase equivalent and its Uppercase equivalent is  %c",ch,toupper(ch));}
    else{printf("%c is a Uppercase equivalent and its Lowercase equivalent is  %c",ch,tolower(ch));}
      
    return 0;

    }
  









