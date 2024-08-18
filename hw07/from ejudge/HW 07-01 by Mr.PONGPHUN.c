#include <stdio.h>
#include <string.h>
 
int main() {
    char name1[101], name2[101];
    scanf("%[^\n]\n%[^\n]", &name1, &name2);
    for (int i = 0; i <= 101; i++) {
        if (name1[i] == '\0') {
            break;
        }
        if (name1[i] >= 'a' && name1[i] <= 'z') {
            name1[i] = name1[i] - 32;
        } else if (name1[i] >= 'A' && name1[i] <= 'Z') {
            name1[i] = name1[i] + 32;
        }
    }
    for (int i = 0; i <= 101; i++) {
        if (name2[i] == '\0') {
            break;
        }
        if (name2[i] >= 'a' && name2[i] <= 'z') {
            name2[i] = name2[i] - 32;
        } else if (name2[i] >= 'A' && name2[i] <= 'Z') {
            name2[i] = name2[i] + 32;
        }
    }
    printf("*** Results ***\n%s\n%s\n***************\n", name1, name2);
    if (strcasecmp(name1, name2) == 0) {
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }
    return 0;
}