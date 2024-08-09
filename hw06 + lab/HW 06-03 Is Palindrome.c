#include <stdio.h>
#include <ctype.h>

int main() {
    char word[101];
    char word2[101];
    int count = 0, count2 = 0, palindrome = 0;

    scanf("%s", word);

    for (int i = 0; i < 100; i++) {
        // printf("%c", word[i]);
        if (word[i] == '\0') {
            break;
        } else {
            word[i] = tolower(word[i]);
            count += 1;
        }
    }
    // printf("\ncount = %d\n", count);
    // printf("word : %s\n", word);

    // for (int i = count - 1; i >= 0; i--) {
    //     printf("char word = %c", word[i]);
    //     printf(" i = %d", i);
    //     printf(" count2 = %d", count2);
    //     word2[count2] = word[i];
    //     count2 += 1;
    //     printf(" word2 = %c\n", word2[count2]);
    // }
    
    // printf("\n%s", word2);

    for (int i = count - 1; i >= 0; i--) { // ลง
        // printf("i = %d ", i);
        // printf(" palindrome = %d", palindrome);
        // printf(" count 2 = %d", count2);
        if (word[i] == word[count2]) {
            // printf(" | same |");

            count2 += 1;
            palindrome += 1;

        } else {
            // printf(" | ahh");
        }
        // printf("\n");
    }

    if (palindrome == count) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }

    return 0;
}