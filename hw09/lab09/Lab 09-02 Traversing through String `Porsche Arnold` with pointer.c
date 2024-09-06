#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    char *str;
 
    // Allocate memory for the string "Porsche Arnold" (including null terminator)
    str = (char*) malloc(20 * sizeof(char));
 
    // Copy "Porsche Arnold" into the allocated memory
    strcpy(str, "Porsche Arnold");
 
    // Print the string
    char *ptr = str;
    while (*ptr != '\0')
        printf("%c", *ptr++);
 
    // Free the allocated memory
    free(str);
    // free(ptr);
 
    printf("\n");
    return 0;
}