#include <stdio.h>
#include <math.h>

int main() {

    int round = 0;
    scanf("%d", &round);

    double num[round + 1];
    double temp = 0;
    int sort = 0;
    double sum = 0, sum_std = 0;

    double mod = 0, med = 0, std = 0;


    for (int i = 0; i < round; i++) {
        scanf(" %lf", &num[i]);
    }

    printf("\n===\n");

    while (sort != round - 1)
    {
        sort = 0;
        for (int i = 0; i < round - 1; i++) {
            // printf("%d, ", num[i]);
            if (num[i] > num[i+1]) {
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
                temp = 0;
            } else {
                sort++;
            }
        }
    }

    for (int i = 0; i < round; i++) {
        sum += num[i];
    }

    // printf("sum = %lf \n", sum);
    printf("avg = %.2lf \n", sum / round);

    for (int i = 0; i < round; i++) {
        sum_std += (num[i]-(sum / round)) * (num[i]-(sum / round));

    }

    printf("std = %.2lf\n", sqrt(sum_std / round));

    for (int i = 0; i < round; i++) {
        printf("%.2lf, ", num[i]);
    }
    printf("\nsort = %d", sort);

// ! เหลือ mode

    return 0;
}