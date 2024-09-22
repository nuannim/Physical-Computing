#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int num = 0;
    int idwewant = 0;

    scanf("%d", &num);

    struct Record r[num];

    for (int i = 0; i < num; i++) {
        scanf(" %s %s %ld %ld", &r[i].id, &r[i].name, &r[i].salary, &r[i].sales);
    }

    scanf(" %d", &idwewant);

    if (idwewant <= num) {
        idwewant--;

        printf("%s\n", r[(int)idwewant].id);
        printf("%s\n", r[(int)idwewant].name);
        printf("%ld\n", r[(int)idwewant].sales);
        printf("%.2lf\n", r[(int)idwewant].sales * (0.02));
        printf("%ld\n", r[(int)idwewant].salary);
        printf("%.2lf", r[(int)idwewant].salary + (r[(int)idwewant].sales * (0.02)));
    } else {
        printf("ID not found !!!");
    }

    return 0;
}
