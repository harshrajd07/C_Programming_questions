#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindromeString(char str[]){
    int i,l=strlen(str);
    for (i = 0; i < l / 2; i++) {
        if (str[i] != str[l - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindromeString(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
