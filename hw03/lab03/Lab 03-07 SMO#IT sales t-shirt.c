#include <stdio.h>

int main() {
    double price, discount, amount;

    scanf("%lf %lf %lf", &price, &discount, &amount);

    printf("%.2lf", price * amount * ((100 - discount) / 100));

    return 0;

}