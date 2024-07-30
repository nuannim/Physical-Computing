#include <stdio.h>
#include <math.h>

int main() {
    int seconds;
    double min, hrs, day;
    int f_seconds, f_min, f_hrs;

    scanf("%d", &seconds);

    min = floor(seconds / 60.0);
    hrs = floor(min / 60.0);
    day = floor(hrs / 24.0);

    f_seconds = seconds % 60;
    f_min = (int)min % 60;
    f_hrs = (int)hrs % 24;

    //^ % only use with int

    // printf("====================\n");
    // printf("min = %lf\n", min);
    // printf("hrs = %lf\n", hrs);
    // printf("\n");
    // printf("f_seconds = %d\n", f_seconds);
    // printf("f_min = %d\n", f_min);
    // printf("f_hrs = %d\n", f_hrs);
    // printf("final day = %lf\n", day);
    // printf("====================\n");

    printf("%d s = %d d %d h %d m %d s", seconds, (int)day, (int)f_hrs, (int)f_min, (int)f_seconds);

    return 0;
}