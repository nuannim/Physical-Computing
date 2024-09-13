#include <stdio.h>

int main() {
    struct Product {
    char name[50];
    float price;
    int quantity;
    };

    struct Product *ptr_product; // Declare a pointer named 'ptr_product'
    struct Product milk = {"Milk", 3.99, 2};
    ptr_product = &milk; // Assign the address of 'milk' to the pointer

    printf("ptr_product->name: %s\n", ptr_product->name); 
    printf("ptr_product->price: %.2f\n", ptr_product->price);

    printf("\n");
    printf("Product Name: %s\n", milk.name); 
    printf("Price: %.2f\n", milk.price);

    printf("====\n");
    // printf("Product Name: %s\n", ptr_product->name); 
    printf("ptr_product: %d\n", ptr_product);
    printf("&milk: %d\n", &milk);
    printf("*ptr_product: %d\n", *ptr_product);
    printf("milk: %d\n", milk);

    printf("\n");
    printf("ptr_product: %s\n", ptr_product);
    printf("&milk: %s\n", &milk);    
    printf("*ptr_product: %s\n", *ptr_product);
    printf("milk: %s\n", milk);

    printf("====\n");

    printf("&ptr: %d\n", &ptr_product);

    printf("====\n");

    printf("milk.name: %s | ", milk.name);
    printf("&milk.name: %d\n", &milk.name);

    printf("milk.price: %f | ", milk.price);
    printf("&milk.price: %d\n", &milk.price);
    
    printf("milk.quantity: %d | ", milk.quantity);
    printf("&milk.quantity: %d\n", &milk.quantity);


    // printf(": %d\n", );

    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");

    
    return 0;
}


