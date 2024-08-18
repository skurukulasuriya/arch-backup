#include <stdio.h>

int main(void)
{
    char id[10];
    int hours;
    double wage, salary;

    printf("Enter employee ID: ");
    scanf("%s", &id);
    printf("\nEnter the working hours: ");
    scanf("%d", &hours);
    printf("\nEnter the amount you get paid/hr: ");
    scanf("%lf", &wage);

    salary = wage * hours;

    printf("\nEmployees ID = %s\nSalary = US %.2f\n", id, salary);

    return 0;
}