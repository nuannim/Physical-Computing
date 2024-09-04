#include <stdio.h>
#include <ctype.h>

int main() {
    int countWord = 0, countAlpha = 0, countP = 0;
    char word[301], whatChar;
    int position[301] = {0};

    scanf("%[^\n]", &word);
    scanf(" %c", &whatChar);

    whatChar = tolower(whatChar);

    for (int i = 0; word[i] != '\0'; i++) {
        if (isupper(word[i])) {
            if (tolower(word[i]) == whatChar) {
                position[countP] = i + 1;
                // printf("position[%d] = %d\n", countP, position[countP]);

                countP++;
                countAlpha++;
                continue;
            }
            
        } else if (islower(word[i])) {
            if (word[i] == whatChar) {
                position[countP] = i + 1;
                // printf("position[%d] = %d\n", countP, position[countP]);

                countP++;
                countAlpha++;
                continue;
            }
        }
    }

    if (countP == 0) {
        printf("Not found.");
    } else {
        printf("There is/are %d \"%c\" in the above sentences.\n", countAlpha, whatChar);
        printf("Position: ");
        for (int i = 0; i < countP - 1; i++) {
            printf("%d, ", position[i]);
        }
        printf("%d", position[countP - 1]);
    }
    
    return 0;
}