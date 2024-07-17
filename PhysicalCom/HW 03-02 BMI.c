#include <stdio.h>
#include <math.h>

int main() {
    float cm, kg;

    scanf("%f", &cm);
    scanf("%f", &kg);

    // printf("%f", cm);
    // printf("\n%f", kg);

    // printf("\n\n%f", kg / pow(cm / 100, 2));

    float m = cm / 100;
    printf("%f", kg / (m * m));

    return 0;
}