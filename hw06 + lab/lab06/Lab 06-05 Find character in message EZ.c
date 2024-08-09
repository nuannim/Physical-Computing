#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[301];
    char * p;
    char find;

    int count = 0, count2 = 0, count_char = 0;

    scanf("%[^\n]", &word);
    scanf(" %c", &find);

//^ tolower + count_char
    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
        if (word[i] == find) {
            count_char += 1;
        }
    }

    if (count_char != 0)
    {
        p = strchr(word, find); //! why??
        printf("There is/are %d \"%c\" in the above sentences.\n", count_char, find);
        printf("Position: ");

        while (p != NULL)
        {
            printf("%d", p - word + 1);
            p = strchr(p+1, find);

            if (p != NULL) {
                printf(", ");
            }
        }
    } else {
        printf("Not found.");
    }


    return 0;
}