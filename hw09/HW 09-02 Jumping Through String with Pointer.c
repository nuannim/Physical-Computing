#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 0;
    scanf("%d", &n);

    char *str  =  (char*)malloc(n * sizeof(char));

    scanf(" %d", &m);
    scanf(" %[^\n]", str);

    for (*str; *str != '\0'; str += m) {
        printf("%c", *str);
    }

    return 0;
}


// HelloWorld