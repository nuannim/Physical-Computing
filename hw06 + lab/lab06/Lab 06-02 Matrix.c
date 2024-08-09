#include <stdio.h>

int main() {
    double m1[3][3]; // ต้องประกาศเกิน 1 ตัว
    double m2[3][3];
    double ans[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}};

//^ m1
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m1[i][0], &m1[i][1], &m1[i][2]);
    }

//^ m2
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m2[i][0], &m2[i][1], &m2[i][2]);
    }

//^ a[i][j]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                double sum = m1[i][k] * m2[k][j];
                ans[i][j] = ans[i][j] + sum;
            }
        }
    }

//^ printf ans
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
