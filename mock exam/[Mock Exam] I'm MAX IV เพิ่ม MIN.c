#include <stdio.h>
#include <string.h>

int main() {
    char word[3];
    int max = 0, num = 0, ans = 0;

    scanf(" %s", word);
    // printf("%s", word);

    if (strcmp(word, "MAX") == 0) {
        scanf(" %d", &num);
        if (num > max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num > max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num > max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num > max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num > max) {
            max = num;
        }

        printf("MAX : %d", max);

    } else if (strcmp(word, "MIN") == 0) {
        scanf(" %d", &num);
        scanf(" %d", &max);

        if (num < max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num < max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num < max) {
            max = num;
        }

        scanf(" %d", &num);
        if (num < max) {
            max = num;
        }

        printf("MIN : %d", max);
    }

    return 0;
}
