#include <stdio.h>

int main() {
    char number[5];

    scanf("%s", &number);
    printf("%.1s", number);
    printf("%82.2s", number);
    printf("%82.3s", number);
    printf("%82.4s", number);
    printf("%82.5s", number);

// 34651

    return 0;
}