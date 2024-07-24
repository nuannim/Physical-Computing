// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
    double price, discount, buy2get1;
    int amount, percent;

    scanf("%lf %d %d", &price, &percent, &amount);
 
    discount = price * ((100.0 - percent) / 100) * amount;
    buy2get1 = price * (2.0 / 3.0) * amount;
     
    // printf("discount : %.2lf", discount);
    // printf("\nbyuy2get1 : %.2lf", buy2get1);
     
    // printf("\n======\n");

    if (discount <= buy2get1) {
        printf("Discount %d%%", percent);
        printf("\n%.2lf", discount);
    } else {
        printf("Buy 2 Get 1");
        printf("\n%.2lf", buy2get1);
    }
    // เสื้อ < 1 ตัว
    // no discount percent


    return 0;

}