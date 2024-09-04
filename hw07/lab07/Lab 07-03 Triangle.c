#include <stdio.h>
#include <math.h>

double perimeter(double a, double b);
double area(double a, double b);

int main() {
    double a, b, peri, areaT;

    scanf("%lf %lf", &a, &b);
    peri = perimeter(a, b);
    areaT = area(a, b);

    printf("Perimeter: %.2lf\n", peri);
    printf("Area: %.2lf", areaT);

    return 0;
}

double perimeter(double a, double b) {
    double c;
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    return a + b + c;
}

double area(double a, double b) {
    return ((0.5) * a * b);
}
