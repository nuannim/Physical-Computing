#include <stdio.h>

int main() {
    double m1[3][3]; // ต้องประกาศเกิน 1 ตัว
    // double m2[3][3];
    double ans[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}};

//^ m1
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m1[i][0], &m1[i][1], &m1[i][2]);
    }

    if (m1[0][0] == m1[1][1] && m1[1][1] == m1[2][2]) {
        if (m1[0][1] == 0 && m1[0][2] == 0 && m1[1][0] == 0 && m1[1][2] == 0 && m1[2][0] == 0 && m1[2][1] == 0) {
            printf("This is a scalar matrix");
        } else {
            printf("This is not a scalar matrix");
        }
    } else {
        printf("This is not a scalar matrix");

    }

    return 0;
}
