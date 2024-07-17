#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, ans;

    scanf(" %f", &num1);
    scanf(" %f", &num2);

    ans = sqrt(pow(num1, 2) + pow(num2, 2));

    printf("%.2f", ans);

    return 0;

}