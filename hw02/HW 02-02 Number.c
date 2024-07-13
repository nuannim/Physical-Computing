#include <stdio.h>

int main() {
    char number[5];
    int i;

    scanf("%s", &number);

    printf("%c", number[2]);
    printf("%c", number[3]);
    printf("%c", number[4]);
    printf("%.2s", number);

    return 0;
}
