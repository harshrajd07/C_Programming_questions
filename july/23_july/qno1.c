#include<stdio.h>
int main(){
    char c;
    float  n,ts,ts1,ts2;
    printf("Enter your designation (D/d for Developer, T/t for Trainer, M/m for Manager: \n");
    scanf("%c",&c);
    printf("Enter your base salary: \n");
    scanf("%f",&n);
    ts=n+10000;
    ts1=n+10000+3000;
    ts2=n+10000+10000+3000;
    printf("Designation: %c\n",c);
    printf("Base_Salary: %.2f\n",n);
    if(c=='D' || c=='d'){
    printf("Total Salary: %.2f\n",ts);
    if(ts>40000) { printf("Tax: %.2f\n",ts * 0.1);}
    else {printf("Tax: %.2f\n",ts * 0.05);}
    }
    else if(c=='T' || c=='t'){
    printf("Total Salary: %.2f\n",ts1);
    if(ts1>40000) { printf("Tax: %.2f\n",ts1 * 0.1);}
    else {printf("Tax: %.2f\n",ts1 * 0.05);}
    }
    else if(c=='M' || c=='m'){
    printf("Total Salary: %.2f\n",ts2);
    if(ts2>40000) {printf("Tax: %.2f\n",ts2 * 0.1);}
    else {printf("Tax: %.2f\n",ts2 * 0.05);}
    }
    else {printf("Invalid input.");}
    
    
}



    
    



