#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    char *ptr = (char*)malloc(101 * sizeof(char));
    int upper = 0, lower = 0, digit = 0;

    scanf("%[^\n]", ptr); //!
    // printf("%s\n", ptr);

    for (int i = 0; *ptr != '\0'; ptr++) {
        if(isupper(*ptr)) {
            upper++;
        } else if (islower(*ptr)) {
            lower++;
        } else if ((int)*ptr >= 48 && (int)*ptr <= 57) {
            digit++;
        }
    }

    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);


}