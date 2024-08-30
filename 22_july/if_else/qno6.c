#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float average;
    printf("Enter the marks of a 5 subjects . ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    average=(m1+m2+m3+m4+m5)/5;
    if(average>=90){printf("Grade is A .");}
    else if(average>=80){printf("Grade is B.");}
    else if(average>=70){printf("Grade is C.");}
    else if(average>=50){printf("Grade is D.");}
    else if(average<50){printf("Grade is F.");}
    printf("Average is %.0f.",average);

    return 0;
}
