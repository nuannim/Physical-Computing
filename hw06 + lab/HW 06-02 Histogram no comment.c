#include <stdio.h>
#include <ctype.h>

int main() {
    char alpha[27] = {0};
    int count[27] = {0};
    int round = 0, countC = 0;
    char a_input;

    scanf("%d", &round);

    for (int i = 0; i < round; i++) {
        scanf(" %c", &a_input);
        a_input = tolower(a_input);
        
        for (int j = 0; j < 27; j++) {
            if (a_input == alpha[j]) {
                count[j] += 1;
                break;
            } else {
                //^ มีเลขอยู่ข้างใน
                if (isalpha(alpha[j])) {
                    continue;

                //^ ยังไม่มีเลขอยู่ข้างใน
                } else {
                    alpha[j] = a_input;
                    count[j] += 1;
                    countC += 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < countC; i++) {
        printf("%c: %d\n", alpha[i], count[i]);
    }

    return 0;
}