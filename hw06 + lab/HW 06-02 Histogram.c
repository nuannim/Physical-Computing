#include <stdio.h>
#include <ctype.h>

int main() {
    char alpha[27] = {0}; //^ ตอนแรกผิด 1 เคส เพราะ output ออกมามั่ว (อยู่ ๆ ก็มี M: 0 แฝงตัวมาทั้ง ๆ ที่ไม่ได้กรอก)
    int count[27] = {0};
    int round = 0, countC = 0;
    char a_input;

    scanf("%d", &round);

    for (int i = 0; i < round; i++) {
        scanf(" %c", &a_input);
        a_input = tolower(a_input);
        
        // printf("i = %d | input = %c |", i, a_input);
        for (int j = 0; j < 27; j++) {
            // printf("\n- j = %d", j);
            if (a_input == alpha[j]) {
                // printf("\n(if ==)\n");
                count[j] += 1;
                break;
            } else {
                // printf("\n(else !=)\n");
                // printf(" | a_input = %c\n", a_input);

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
            // printf("--- alpha[%d] = %c", j, alpha[j]);
            // printf(" | count[%d] = %d", j, count[j]);
            // break;
        }
        // printf(" | alpha[0] = %c\n", alpha[0]);
        // printf("\n========\n");
        // printf("count[0] = %d\n", count[0]);
        // printf("count[1] = %d\n", count[1]);
        // printf("count[2] = %d\n", count[2]);
        // printf("count[3] = %d\n", count[3]);
        // printf("count[4] = %d\n", count[4]);
        // printf("count[5] = %d\n", count[5]);
        // printf("count[6] = %d\n", count[6]);
        // printf("count[7] = %d\n", count[7]);
        // printf("count[8] = %d\n", count[8]);
        // printf("count[9] = %d\n", count[9]);
        // printf("count[10] = %d\n", count[10]);

        // printf("count[11] = %d\n", count[11]);
        // printf("count[12] = %d\n", count[12]);
        // printf("count[13] = %d\n", count[13]);
        // printf("count[14] = %d\n", count[14]);
        // printf("count[15] = %d\n", count[15]);
        // printf("count[16] = %d\n", count[16]);
        // printf("count[17] = %d\n", count[17]);
        // printf("count[18] = %d\n", count[18]);
        // printf("count[19] = %d\n", count[19]);
        // printf("count[20] = %d\n", count[20]);

        // printf("count[21] = %d\n", count[21]);
        // printf("count[22] = %d\n", count[22]);
        // printf("count[23] = %d\n", count[23]);
        // printf("count[24] = %d\n", count[24]);
        // printf("count[25] = %d\n", count[25]);
        // printf("count[26] = %d\n", count[26]);
        // printf("\n========\n");
    }

    for (int i = 0; i < countC; i++) {
        printf("%c: %d\n", alpha[i], count[i]);
    }
    // printf("countC = %d", countC);
    return 0;
}