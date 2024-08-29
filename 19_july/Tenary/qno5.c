#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);
    (c == 'a'|| c == 'e'|| c =='i'|| c == 'o'|| c == 'u') ? printf("Character %c is Vowel.",c) :
    printf("Character %c is Consonant.",c);

   return 0;
}