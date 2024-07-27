#include <stdio.h>

int main() {
    double score;

    scanf("%lf", &score);

    if (score >= 80 && score <= 100) {
        printf("A");
    } else if (score >= 70 && score <= 79.99) {
        printf("B");
    } else if (score >= 60 && score <= 69.99) {
        printf("C");
    } else if (score >= 50 && score <= 59.99) {
        printf("D");
    } else if (score >= 0 && score <= 49.99) {
        printf("F");
    } else {
        printf("Out of Range");

    }

    return 0;

}
