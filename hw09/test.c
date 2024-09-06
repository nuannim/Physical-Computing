// #include <stdio.h>

// int main() {

//     // int a = 0;
//     // int b = &a;

//     // printf("val a = %d\n", a);
//     // printf("val b = %d\n", b);
//     // printf("address a = %d\n", &a);
//     // printf("address b = %d", &b);

// // ==================================
//     // int arr[] = {10, 20, 30, 40, 50};
//     // int *ptr = arr;

//     // printf("address = %d\n", ptr);
//     // printf("Value at ptr: %d\n", *ptr);
//     // ptr++;
//     // printf("address = %d\n", ptr);    
//     // printf("Value at ptr: %d\n", *ptr);
// // ==================================

// // ==================================
//     char space = '9';
//     char aa = '0';
//     printf("%d %d", (int)space, (int)aa);
// // ==================================


// }


#include <stdio.h>
#include <stdlib.h> // For malloc(), free()

int main() {
    int *arr;
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory
    arr = (int*)malloc(size * sizeof(int)); 

    if (arr == NULL) { // Check for allocation failure
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Access elements using pointer arithmetic
    }

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Another way to access elements
    }
    printf("\n");

    free(arr); // Release the allocated memory
    return 0;
}