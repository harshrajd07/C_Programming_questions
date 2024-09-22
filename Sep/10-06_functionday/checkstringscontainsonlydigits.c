#include <stdio.h>
#include <stdbool.h>
bool isContainsDigits(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') { 
            return false;
        }
    }
    return true;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isContainsDigits(str)) {
        printf("The string contains only digits.\n");
    } else {
        printf("The string contains non-digit characters.\n");
    }

    return 0;
}
