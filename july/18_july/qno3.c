#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    char *result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    printf("The number is %s.\n", result);
    
    return 0;
}

