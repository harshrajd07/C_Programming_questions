#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CHAR_COUNT 256
bool isAnagram(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) return false;
    int count[CHAR_COUNT] = {0};
    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0) return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("The strings are %sanagrams.\n", isAnagram(str1, str2) ? "" : "not ");
    return 0;
}
