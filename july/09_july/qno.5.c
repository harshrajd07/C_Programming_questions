#include<stdio.h>
int main()
{
    int years,months,weeks,days,total_days;
    printf("Enter number of days:\n ");
    scanf("%d",&total_days);
    /*finding the number of years */
    years=total_days/365;
    total_days=total_days%365;
    /*finding the number of months */
    months=total_days/30;
    total_days=total_days%30;
    /*finding the number of weeks */
    weeks=total_days/7;
    /*finding the number of days */
    days=total_days%7;

    printf("%d year(s),%d month(s),%d week(s),%d Day(s)\n",years,months,weeks,days);

    return 0;
}