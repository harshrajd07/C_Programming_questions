#include <stdio.h>
#include<ctype.h>
    int main() {
      char ch;
      printf("Enter a lowercase character:");
      scanf("%c",&ch);
      printf("Uppercase equivalent: %c",toupper(ch));
      return 0;
    }
