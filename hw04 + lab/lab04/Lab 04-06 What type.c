#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    scanf("%c", &character);

    // printf("%c", character);

    if (islower(character)) {
        printf("lowercase");
    } else if (isupper(character)){
        printf("uppercase");
    } else if (isalnum(character)) {
        printf("number");
    } else {
        printf("error");
    }

    return 0;
}