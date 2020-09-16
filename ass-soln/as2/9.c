#include <stdio.h>
int main() {
    double salary, da, hra, gsalary;
    printf("Enter Basic Salary:\n");
    scanf("%lf", &salary);
    da = 0.6 * salary;
    hra = 0.15 * salary;
    gsalary = da + hra + salary;
    printf("Gross salary is: %lf\n", gsalary);

    return 0;
}