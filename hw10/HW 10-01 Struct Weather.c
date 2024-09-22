#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather ww) {
    // struct Weather ww;
    
    if (strcmp(ww.outlook, "overcast") == 0) {
        printf("yes");
    } else if (strcmp(ww.outlook, "rain") == 0) {
        if (ww.wind == 'F') {
            printf("yes");
        } else {
            printf("no");
        }
    } else if (strcmp(ww.outlook, "sunny") == 0) {
        if (ww.humidity > 77.5) {
            printf("no");
        } else {
            printf("yes");
        }
    }
}

int main() {
    int num = 0;

    scanf("%d", &num);

    struct Weather w[num];

    for (int i = 0; i < num; i++) {
        scanf(" %s %d %d %c", &w[i].outlook, &w[i].temperature, &w[i].humidity, &w[i].wind);
    }

    // check

    playing_decision(w[0]);

    for (int i = 1; i < num; i++) {
        // printf("value check : %s %d %d %c\n", w[i].outlook, w[i].temperature, w[i].humidity, w[i].wind);
        printf("\n");
        playing_decision(w[i]);
    }


    return 0;
}