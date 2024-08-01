#include <stdio.h>

int main() {
    int n, a;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // printf("i = %d", i);
        for (int k = 1; k < n - i; k++) {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) + 1; j++) {
            // printf(" j = %d", j);
            printf("*");
        }
        printf("\n");
    }

    return 0;
}