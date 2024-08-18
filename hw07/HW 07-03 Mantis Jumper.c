#include <stdio.h>

int main() {
    int f0 = 0, f1 = 1, f2 = 0;
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        f2 = f1 + f0;
        f0 = f1;
        f1 = f2;

    }
    printf("method = %d", f2);
    return 0;
}