#include <stdio.h>

int main() {

    int sbp = 0, dbp = 0;

    scanf("%d", &sbp);
    scanf(" %d", &dbp);

    if (sbp <= 140 && dbp <= 90) {
        printf("Normal");
    } else {
        printf("Hypertension");
    }


    return 0;
}