#include <stdio.h>

int main() {
    // double matrix1[][];
    // double matrix2[][];

    for(int i = 0; i < 3; i++) {
        printf("%d", i);

        for (int j = 0; j < i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}