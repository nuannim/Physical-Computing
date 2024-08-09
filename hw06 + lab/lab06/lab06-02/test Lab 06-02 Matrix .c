#include <stdio.h>

int main() {
    double m1[3][3]; // ต้องประกาศเกิน 1 ตัว
    double m2[3][3];
    // scanf("%lf %lf %lf", &m1[0][0], &m1[0][1], &m1[0][2]);
    double ans[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}};

//^ m1
    for (int i = 0; i < 3; i++) {
        printf("[enter i=%d] : ", i);
        scanf("%lf %lf %lf", &m1[i][0], &m1[i][1], &m1[i][2]);
    }
    printf("======\n");
//^ m2
    for (int i = 0; i < 3; i++) {
        printf("[enter i=%d] : ", i);
        scanf("%lf %lf %lf", &m2[i][0], &m2[i][1], &m2[i][2]);
    }

    printf("=== printf m1 ===\n");

// //^ printf m1
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("[i=%d/j=%d]", i, j);
//             printf("%.2lf ", m1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("=== printf m2 ===\n");

// //^ printf m2
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("[i=%d/j=%d]", i, j);
//             printf("%.2lf ", m2[i][j]);
//         }
//         printf("\n");
//     }


    printf("========================\n");
//^ ans[0][0]
    for (int j = 0; j < 3; j++) {
        double sum_a = m1[0][j] * m2[j][0];
        ans[0][0] = ans[0][0] + sum_a;
    }
    printf("%lf ", ans[0][0]);

//^ ans[0][1]
    for (int j = 0; j < 3; j++) {
        double sum_a = m1[0][j] * m2[j][1];
        ans[0][1] = ans[0][1] + sum_a;
    }
    printf("%lf ", ans[0][1]);

    printf("\n");

//^ ans[1][0]
    for (int j = 0; j < 3; j++) {
        double sum_a = m1[1][j] * m2[j][0];
        ans[1][0] = ans[1][0] + sum_a;
    }
    printf("%lf ", ans[1][0]);


    return 0;
}