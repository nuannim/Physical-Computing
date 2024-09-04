#include <stdio.h>

int main() {
    int num[] = {1, 6, 0, 4, 9};
    int temp = 0, sorted = 0;


    while (sorted != 4) {
        sorted = 0;
        for (int i = 0; i < 5 - 1; i++) {
            if (num[i] > num[i + 1]) {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
                temp = 0;

            } else {
                sorted++;
                printf("sorted = %d\n", sorted);
            }
        }
    }

    // printf("sorted = %d\n", sorted);
    for (int i = 0; i < 5; i++) {
        printf("%d, ", num[i]);
    }

    return 0;
}