#include <stdio.h>
#include <stdbool.h>
bool isEvenOrOdd(int n){
    return (n % 2 == 0);
}
int main() {
    int number;
    bool result;
    printf("Input any number: ");
    scanf("%d",&number);
    result = isEvenOrOdd(number);
    if (result) {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }

    return 0;
}
