#include <stdio.h>

int main()
{
    float salary;
    int service;
    float bonus;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Years of Service: ");
    scanf("%d", &service);

    bonus = (service > 10) ? salary * 0.30 :
            (service > 5) ? salary * 0.20 :
                            salary * 0.10;

    printf("Bonus Amount = %.2f\n", bonus);

    return 0;
}

