#include <stdio.h>
#include <math.h>

int main() {
    int degree = 0, u = 0;
    double pi = 3.141592653589793;
    double radius = 0, h = 0;

    scanf("%d", &degree);
    scanf(" %d", &u);

    radius = (degree * pi) / 180;

    h = ((u * u) * (sin(radius) * sin(radius))) / (2 * 9.81);

    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf\n", h);

    return 0; 
}

