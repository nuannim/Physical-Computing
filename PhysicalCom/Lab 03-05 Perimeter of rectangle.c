#include <stdio.h>

int main() {
    float num1, num2;

    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Perimeter of rectangle = %.4f units", (num1 + num2) * 2);

    return 0;

}