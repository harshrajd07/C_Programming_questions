#include <stdio.h>
   
    int main() {
        int n,hour,minute,second,min;
        printf("Enter the number of seconds : ");
        scanf("%d",&n);
        hour = n/3600;
        min = n%3600;
        minute = min/60;
        second = min%60;
        printf("%d seconds is equivalent to %d hours, %d minutes and %d seconds",n,hour,minute,second);
       
    }
