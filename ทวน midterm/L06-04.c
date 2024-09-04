#include <stdio.h>

int main() {
    char word[101] = {0};
    char sentence[101] = {0};

    int count = 0;
    
    scanf("%[^\n]", &word);

    // printf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        count++;
    }

    int count2 = 0;
    for (int i = count - 1; i >= 0; i--) {
        // printf("%c", word[i]);
        sentence[count2] = word[i];
        // printf("sen = %c\n", sentence[count2]);
        count2++;
    }
    // sentence[count2] = '\0';

    printf("%s", sentence);

    return 0;
}