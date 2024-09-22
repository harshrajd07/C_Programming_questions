#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    int i = 0;
    printf("Enter a String: ");
    scanf("%[^\n]", str);
    if (str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 'a' + 'A';
    }
    while(str[i] != '\0'){
        if(str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
            str[i + 1] = str[i + 1] - 'a' + 'A';
        }
        i++;
    }
    printf("Sum Of the numbers is: %s\n", str);

    return 0;
}
