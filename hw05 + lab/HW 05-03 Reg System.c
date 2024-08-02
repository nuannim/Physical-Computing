#include <stdio.h>
#include <math.h>

int main() {
    int age, height, weight;

    int count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0;

    int sum_age;
    float sum_height, sum_weight;

    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &age, &height, &weight);

        if (age >= 20 && height >= 160) {
            count_1 = count_1 + 1;
        }
        
        if (age < 20 && (height <= 180 || weight >= 60)) {
            count_2 = count_2 + 1;
        }
        
        if (age >= 30 && weight >= 40 && weight <= 80) {
            count_3 = count_3 + 1;
        }
        
        if (age < 40 && (weight < 85 || height <= 200)) {
            count_4 = count_4 + 1;
        }

        sum_age = sum_age + age;
        sum_height = sum_height + height;
        sum_weight = sum_weight + weight;
    }

    printf("Age >= 20 and Height >= 160: %d", count_1);
    printf("\n");
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d", count_2);
    printf("\n");
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d", count_3);
    printf("\n");
    printf("Age < 40 and Weight < 85 or Height <= 200: %d", count_4);
    
    printf("\n");
    printf("Average Age: %d", (int)round(sum_age / 50));
    printf("\n");
    printf("Average Height: %.2f", sum_height / 50.0);
    printf("\n");
    printf("Average Weight: %.2f", sum_weight / 50.0);

    return 0;

}
