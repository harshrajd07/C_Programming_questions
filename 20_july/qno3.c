#include <stdio.h>
int main() {
    int hour;
    printf("********** Time of Day Identifier **********\n");
    printf("Enter the hour (24-hour format): \n");
    scanf("%d", &hour);
    if (hour < 0 || hour > 23) {printf("Invalid input! Please enter an hour between 0 and 23.\n");}  
if (hour >= 5 && hour < 12)  {printf("It's Morning.\n");}  
if (hour >= 12 && hour < 17) {printf("It's Afternoon.\n");}  
if (hour >= 17 && hour < 21) {printf("It's Evening.\n");} 
if (hour >= 21 && hour < 4) {printf("It's Night.\n");}
    
    return 0;
}
