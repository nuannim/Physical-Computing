#include <stdio.h>

int main() {
    int score[20];
    int i;
    for (i=0; i<20; i++) {
        printf("enter score &d: ", i + 1);
        scanf("$d", &score[i]);
    }

    return 0;
}