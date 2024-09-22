#include <stdio.h>
int main() {
    int n = 5;  
    int cols = 3;  
    int number = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", number + j);
            }
        } else {
            for (int j = cols - 1; j >= 0; j--) {
                printf("%d\t", number + j);
            }
        }
        number += cols; 
        printf("\n");
    }
    return 0;
}
