#include <stdio.h>
int main() {
    char name[50];
    char vehicleName[50];
    int vehicleType, vehicleAge, issueType, tyreCount, bill;
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your vehicle name: ");
    scanf(" %[^\n]", vehicleName);
    printf("Enter your vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
    scanf("%d", &vehicleType);

    if (vehicleType == 2 || vehicleType == 3 || vehicleType == 4) {
    
        printf("Enter the age of your vehicle (in months): ");
        scanf("%d", &vehicleAge);

        if (vehicleAge > 8) {
            printf("Select the type of issue:\n");
            printf("1) Enter 1 for tyre problem\n");
            printf("2) Enter 2 for fuel problem\n");
            printf("3) Enter 3 for engine issue\n");
            printf("4) Enter 4 for general services\n");
            scanf("%d", &issueType);
            if (issueType == 1) {
                printf("How many tyres are you facing the issue with? ");
                scanf("%d", &tyreCount);
                bill = tyreCount * 400;
            } else if (issueType == 2) {
                bill = 1500;
            } else if (issueType == 3) {
                bill = 5000;
            } else if (issueType == 4) {
                bill = 1000;
            } else {
                printf("Invalid issue type selected.\n");
                return 0;
            }
            printf("\n----- Bill -----\n");
            printf("Name of the owner: %s\n", name);
            printf("Name of the vehicle: %s\n", vehicleName);
            printf("Issue: ");
            if (issueType == 1) {
                printf("Tyre problem\n");
            } else if (issueType == 2) {
                printf("Fuel problem\n");
            } else if (issueType == 3) {
                printf("Engine issue\n");
            } else if (issueType == 4) {
                printf("General services\n");
            }
            printf("Bill: Rs. %d\n", bill);

        } else {
            printf("Your vehicle service will be done after a while.\n");
        }
    } else {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler.\n");
    }

 return 0;
}

