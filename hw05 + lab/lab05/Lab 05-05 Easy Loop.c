#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n != 0) {
        printf("%d ", n);
        if (n >= 0) {
            n = n - 1;
        } else {
            n = n + 1;
        }
    }
    printf("%d ", 0);
    

    return 0;
}