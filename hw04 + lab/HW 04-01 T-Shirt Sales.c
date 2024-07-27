// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
 
int main() {
    double price, discount_p, buy2get1_p;
    int amount, percent; 
    double a_2get1, a_2get1_more;

    scanf("%lf %d %d", &price, &percent, &amount);
 
    discount_p = price * ((100.0 - percent) / 100) * amount;

    if (amount < 3) {
        buy2get1_p = price * amount;
        // printf("2 get 1 price = %.2lf", buy2get1_p);
    } else {
        a_2get1_more = amount % 3;
        a_2get1 = floor(amount / 3);

        buy2get1_p = ((price * 2) * a_2get1) + (price * a_2get1_more);

        // printf("2get1 = %.2lf  want more = %.2lf\n", a_2get1, a_2get1_more);
        // printf("2 get 1 price = %.2lf", buy2get1_p);
    
    }

    // printf("\nwith discount price = %.2lf", discount_p);
    // printf("\n==========\n");

    if (discount_p <= buy2get1_p) {
        printf("Discount %d%%", percent);
        printf("\n%.2lf", discount_p);
    } else {
        printf("Buy 2 Get 1");
        printf("\n%.2lf", buy2get1_p);
    }

    return 0;

}