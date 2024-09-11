#include <stdio.h>
int main() {
    int n;
    int i, j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= n; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
