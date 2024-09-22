#include <stdio.h>
int main() {
    char nationality, gender;
    int age;
    printf("Enter your nationality (I for Indian, i for Indian): ");
    scanf(" %c", &nationality);
    if (nationality == 'I' || nationality == 'i') {
        printf("Enter your gender (M for Male, F for Female): ");
        scanf(" %c", &gender);
        if (gender == 'M' || gender == 'm') {
            printf("Enter your age: ");
            scanf("%d", &age);
            if (age >= 21 && age <= 50) {
                printf("Congratulations! You are eligible for marriage.\n");
            } else {
                printf("Sorry! You are not eligible for marriage.\n");
            }
        } else if (gender == 'F' || gender == 'f') {
           
            printf("Enter your age: ");
            scanf("%d", &age);

            if (age >= 18 && age <= 45) {
                printf("Congratulations! You are eligible for marriage.\n");
            } else {
                printf("Sorry! You are not eligible for marriage.\n");
            }
        } else {
            printf("Invalid gender input! Please enter 'M' for Male or 'F' for Female.\n");
        }
    } else {
        printf("Eligibility check is only for Indian citizens.\n");
    }

    return 0;
}
