#include<stdio.h>
int main(){
    int hours,minutes;
    printf("Enter the hours (in 24-hour format): \n");
    scanf("%d",&hours);
    printf("Enter the minutes: \n");
    scanf("%d",&minutes);
    if(hours>12 && hours<=23){
        hours = hours - 12;
        printf("The time is  %d:%d PM",hours,minutes);
    }    
    else{printf("The time is  %d:%d AM",hours,minutes);
    }

    return 0;
}
