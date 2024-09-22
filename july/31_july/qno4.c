#include <stdio.h>
int main() {
    int userId, password;
    const int validUserId = 1001;
    const int validPassword = 1010;
    const char* userName = "John Doe";
    printf("Enter User ID: ");
    scanf("%d", &userId);
    switch (userId) {
        case 1001:
            printf("Enter Password: ");
            scanf("%d", &password);
            switch (password) {
                case 1010:
                    printf("Welcome, %s!\n", userName);
                    break;
                default:
                    printf("Incorrect Password\n");
                    break;
            }
            break;
        default:
            printf("Incorrect ID\n");
            break;
    }

    return 0;
}
