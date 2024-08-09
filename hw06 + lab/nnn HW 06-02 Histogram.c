#include <stdio.h>

int main() {
    char alpha[27];
    int count[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0};
    int round;
    char a_input;

    scanf("%d", &round);

    for (int i = 0; i < round; i++) {
        
        scanf("%c", &a_input);
        
        printf("i = %d | input = %c", i, round);
        for (int j = 0; j != '\0'; j++) {
            if (a_input == alpha[j]) {
                count[j] += 1;
            } else {
                alpha[j] = a_input;
                count[j] += 1;
            }
        }
        printf("%c", alpha[0]);
    }
    // printf("%s", alpha);
    return 0;
}