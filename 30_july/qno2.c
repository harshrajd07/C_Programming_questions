#include <stdio.h>

int main() {
   char ch;
   printf("Enter an alphabet: \n");
   scanf(" %c",&ch);
   if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
   switch(ch){
       case 'a' : case 'e' : case 'i' : case 'o' : case 'u': 
       case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
       printf("Vowel. \n");break;
       default: printf("Consonant. \n");
   }
   }
   else{printf("It is not an alphabet.\n");}
   
    return 0;
}