#include <stdio.h>
int main() 
{   
    char employee_name[100],employee_designation[100];
    int employee_ID;
    float employee_salary;
    printf("Enter employee name: \n");
    scanf("%s",employee_name);
    printf("Enter employee ID: \n");
    scanf("%d",&employee_ID);
    printf("Enter employee designation: \n");
    scanf("%s",employee_designation);
    printf("Enter employee salary: \n");
    scanf("%f",&employee_salary);
    printf("Employee_name:%s\n",employee_name);
    printf("Employee_ID:%d\n",employee_ID);
    printf("Designation:%s\n",employee_designation);
    printf("Employee_salary:($) %.2f\n",employee_salary);
    
    return 0;
}
