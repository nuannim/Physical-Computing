#include <stdio.h>
#include <math.h>

int main() {
    double price, diameter, hight;
    double volumn, bathpml;

    scanf("%lf %lf %lf", &price, &diameter, &hight);
    volumn = 3.14159265359 * ((diameter / 2) * (diameter / 2)) * hight;
    // volumn = 3.14159265359 * (pow((diameter / 2), 2)) * hight;

    // printf("before round = %lf\n", volumn);
    // volumn = round(volumn * 100) / 100;

    // printf("after round = %lf", volumn);

    printf("Volume : %.2lfml\n", volumn);
    printf("Baht/ml : %.4lf", price / volumn);

    return 0;
}