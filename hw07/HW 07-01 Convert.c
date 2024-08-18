#include <stdio.h>
#include <ctype.h>

int main() {

    char word1[101] = {0}, word2[101] = {0}, ans1[101] = {0}, ans2[101] = {0};

    scanf("%[^\n]", &word1);
    scanf(" %[^\n]", &word2);

    int i = 0;

    while (word1[i] != '\0') {
        if (isupper(word1[i])) {
            ans1[i] = tolower(word1[i]);
        } else if (islower(word1[i])) {
            ans1[i] = toupper(word1[i]);
        } else {
            ans1[i] = word1[i];
        }

        i++;
    }

    int j = 0;

    while (word2[j] != '\0') {

        if (isupper(word2[j])) {
            ans2[j] = tolower(word2[j]);
        } else if (islower(word2[j])) {
            ans2[j] = toupper(word2[j]);
        } else {
            ans2[j] = word2[j];
        }

        j++;
    }

    printf("*** Results ***\n");
    printf("%s\n", ans1);
    printf("%s\n", ans2);
    printf("***************\n");

    int check = 0;

    if (i != j) {
        printf("Both strings are not the same.");
        return 0;
    } else {
        for (int k = 0; k < i; k++) {
            if (tolower(word1[k]) != tolower(word2[k])) {
                printf("Both strings are not the same.");
                check = 1;
                break;
            }
        }
    }

    if (check == 0) {
        printf("Both strings are the same.");
    }

    return 0;
}
