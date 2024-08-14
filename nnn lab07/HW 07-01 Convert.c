#include <stdio.h>
#include <ctype.h>

int main() {

    char word1[101] = {0}, word2[101] = {0}, ans1[101] = {0}, ans2[101] = {0};

    scanf("%[^\n]", &word1);
    scanf(" %[^\n]", &word2);


    // printf("%s", word1);
    // printf("\n");
    // printf("%s", word2);

    int i = 0;

    while (word1[i] != '\0') {
        printf("i = %c\n", word1[i]);

        if (isupper(word1[i])) {
            printf("(isupper)word[%d] = %c\n", i, word1[i]);
            ans1[i] = tolower(word1[i]);
        } else if (islower(word1[i])) {
            printf("(islower)word[%d] = %c\n", i, word1[i]);
            ans1[i] = toupper(word1[i]);
        } else {
            printf("(else)word[%d] = %c\n", i, word1[1]);
            ans1[i] = word1[i];
        }

        i++;
    }

    int j = 0;

    while (word2[j] != '\0') {
        printf("j = %c\n", word2[j]);

        if (isupper(word2[j])) {
            printf("(isupper)word[%d] = %c\n", j, word2[j]);
            ans2[j] = tolower(word2[j]);
        } else if (islower(word2[j])) {
            printf("(islower)word[%d] = %c\n", j, word2[j]);
            ans2[j] = toupper(word2[j]);
        } else {
            printf("(else)word[%d] = %c\n", j, word2[1]);
            ans2[j] = word2[j];
        }

        j++;
    }

    printf("====\n");
    printf("");
    printf("ans1 = %s\n", ans1);
    printf("ans2 = %s\n", ans2);

    int k = 0;
    int check = 0;

    if (j != i) {
        printf("Both strings are not the same.");
    } else {
        while (check == 0) {  ////////!
            if (word2[k] != word2[k]) {
                check = 1;
                break;
            }
        }
    }

    if (check == 1) {
        printf("Both strings are the same.");
    }

    printf("check = %d", check);


    return 0;
}