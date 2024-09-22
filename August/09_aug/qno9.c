#include <stdio.h>
int main() {
    int n;
    int r, c,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(r = 1; r <= n; r++) 
    {   a=r;
        for(c = 1; c <= n; c++) {
            printf("%d\t",a);
            a=a+5;
        }
        printf("\n");
    }

    return 0;
}
