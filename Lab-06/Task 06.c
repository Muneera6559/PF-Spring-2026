#include <stdio.h>

int main() {
    float salary;

    printf("Enter base salary: ");
    scanf("%f", &salary);

    for(int year = 1; year <= 10; year++) {
        salary = salary + (salary * 0.05);
        printf("Year %d Salary: %.2f\n", year, salary);
    }

    return 0;
}
