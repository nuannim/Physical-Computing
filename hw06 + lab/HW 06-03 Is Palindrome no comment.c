#include <stdio.h>

int main() {
    char word[101];
    char word2[101];
    int count = 0, count2 = 0, palindrome = 0;

    scanf("%s", word);

    for (int i = 0; i < 100; i++) {
        if (word[i] == '\0') {
            break;
        } else {
            count += 1;
        }
    }

    for (int i = count - 1; i >= 0; i--) { // ลง
        if (word[i] == word[count2]) {
            count2 += 1;
            palindrome += 1;
        }
    }

    if (palindrome == count) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }

    return 0;
}