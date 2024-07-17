#include <stdio.h>

int main() {
    char word[3];

    scanf("%s", &word);

    printf("*****");
    printf("\n*-*-*");
    printf("\n*%s*", word);
    printf("\n*-*-*");
    printf("\n*****");

    return 0;
}
