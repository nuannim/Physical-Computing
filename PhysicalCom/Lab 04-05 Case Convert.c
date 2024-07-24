#include <stdio.h>

int main() {
    char word;

    scanf("%c", &word);

    switch (word) {
        case 65 ... 90:
            printf("%c", word + 32);
            break;
        case 97 ... 122:
            printf("%c", word - 32);
            break;
        default:
            printf("error");
    }

    return 0;

}