#include <stdio.h>
int main() {
    char name[10];
    double fixedsalary, totalsales, profit;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your fixed salary: ");
    scanf("%lf", &fixedsalary);
    printf("Enter your total salary: ");
    scanf("%lf", &totalsales);

    profit = fixedsalary + (totalsales * 0.15);

    printf("TOTAL = R$ %.2lf\n", profit);

    return 0;
}
