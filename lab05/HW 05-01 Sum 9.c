#include <stdio.h>

int main() {
    int i;
    int n = 0;

    do {
        scanf("%d", &i);
        // printf("\ninput = %d\n", n);
        // if (i > 0) {
        if (i != -9) {
            n = n + i;
        }

    // } while (i > 0);
    } while (i != -9);

    printf("%d", n);

    return 0;
}