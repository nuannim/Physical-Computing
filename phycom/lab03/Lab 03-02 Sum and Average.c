#include <stdio.h>

int main() {
    float num1, num2, num3, num4;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);

    float ans = num1 + num2 + num3 + num4;

    printf("Summation is %.2f", ans);
    printf("\nAverage is %.3f", ans / 4);

    return 0;
}
