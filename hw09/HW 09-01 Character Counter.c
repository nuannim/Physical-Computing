#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    // char word[101]; //! ติดอันนี้ ห้ามใช้[]
    // char *ptr = word;
    char *ptr = (char*)malloc(101 * sizeof(char));
    int upper = 0, lower = 0, digit = 0;

    scanf("%[^\n]", ptr); //! ทำไมไม่ต้องใส่ &
    printf("%s\n", ptr);

    // printf("===============\n");

    for (int i = 0; *ptr != '\0'; ptr++) {
        if(isupper(*ptr)) {
            upper++;
            // printf("upper!\n");
        } else if (islower(*ptr)) {
            lower++;
            // printf("lower!\n");
        } else if ((int)*ptr >= 48 && (int)*ptr <= 57) {
            // printf("spabe\n");
            digit++;
            // printf("digit!\n");
        }
    }

    // printf("upper = %d\nlower = %d\ndigit = %d", upper, lower, digit);
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);


}