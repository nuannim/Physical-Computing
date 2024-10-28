#include <stdio.h>
#include <math.h>

int main() {

    int size = 0, biggersize = 0;

    scanf("A%d", &size);
    scanf(" A%d", &biggersize);

    int power = biggersize - size;
    int ans = pow(2, power);

    printf("%d", ans);

    return 0;
}
