#include <stdio.h>
int main(){
    int num1;
    float num2, num3, salary;

    scanf("%d", &num1);
    scanf("%f %f",&num2,&num3);

    salary = num2 * num3;

    printf("NUMBER = %d\n", num1);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
