#include <stdio.h>

int main() {
    char word[101]; //^ 100 ตัว + \0 อีก 1 
    int count = 0;

    scanf("%[^\n]", &word); //^ %s ใช้กับที่มีเว้นวรรคไม่ได้ ใช้ %[^\n] แทน
    for (int i = 0; i < 101; i++) {
        if (word[i] == '\0') {
            // printf("last index = %d", i);
            break;
        }
        count += 1;
    }

    for (int i = count-1; i >= 0; i--) { //^ 0-99 มี 100 ตัว
        printf("%c", word[i]);
    }

    return 0;
}


