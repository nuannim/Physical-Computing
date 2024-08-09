#include <stdio.h>
#include <ctype.h>

int main() {
    char encrypt[] = {'i', 'w', 'g', 'z', 'v', 'f', 'u', 't', 'h', 's', 'o', 
     'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm', 'r', 'q', 'p', 'y', 
     'x', 'b', 'a'};

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
