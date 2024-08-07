#include <stdio.h>

int main() {
    int check = 0;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};

    int length_m = sizeof(M) / sizeof(M[0]);
    int length_n = sizeof(N) / sizeof(N[0]);

    // printf("length_m = %d\n", length_m);
    // printf("length_n = %d", length_n);

    // printf("\n---------------------\n");

    int num;
    scanf("%d", &num);    

    while (num < 1 || num > 20) {
        scanf("%d", &num);
    }

    for (int i = 0; i < length_m; i++) {
        if (num == M[i]) {
            printf("%d is in M at index [%d]\n", num, i);
            check = 1;
            break;
        } else if (num == N[i] && i < length_n) {
            printf("%d is in N at index [%d]\n", num, i);
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("%d is not in neither M nor N", num);
    }






    return 0;
}