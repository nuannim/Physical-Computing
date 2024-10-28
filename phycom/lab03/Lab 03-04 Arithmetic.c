#include <stdio.h>
int main() {
    double num1, num2;

    scanf("%lf,%lf", &num1, &num2);

    // printf("%lf\n%lf", num1, num2);

    printf("The sum of the given numbers : %lf", num1 + num2);
    printf("\nThe difference of the given numbers : %lf", num1 - num2);
    printf("\nThe product of the given numbers : %lf", num1 * num2);
    printf("\nThe quotient of the given numbers : %lf", num1 / num2);

    return 0;
}