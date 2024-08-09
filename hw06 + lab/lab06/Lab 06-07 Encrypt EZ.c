#include <stdio.h>
#include <ctype.h>

int main() {
    char encrypt[] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 
    'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 
    'f', 'v', 'z', 'g', 'w', 'i'};

    char noencrypt[201];

    scanf("%[^\n]", &noencrypt);

    for (int i = 0; i < 201; i++) {
        if (noencrypt[i] == '\0') {
            break;
        } else {
            int upper = 0;

            for (int j = 0; j < sizeof(encrypt); j++) {
                if (isupper(noencrypt[i])) {
                    upper += 1;
                    noencrypt[i] = tolower(noencrypt[i]);
                }

                if (noencrypt[i] == encrypt[j]) {
                    if (j - 5 < 0) {
                        j = 26 + j;
                    } 
                    if (upper == 1) {
                        printf("%c", toupper(encrypt[j-5]));
                    } else {
                        printf("%c", encrypt[j-5]);
                    }
                } else if ((int)noencrypt[i] == 32) {
                    printf(" ");
                    break;
                }
            }
        }
    }
    
    return 0;
}
