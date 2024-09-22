#include <stdio.h>
int main() {
    char str[100];
    int count;
    int visited[100] = {0};
    printf("Enter a String: ");
    scanf("%s", str);
    printf("Resulting string is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[i] == 1) {
            continue;
        }
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1) {
            printf("%c%d", str[i], count);
        }
    }
    printf("\n");
    return 0;
}
