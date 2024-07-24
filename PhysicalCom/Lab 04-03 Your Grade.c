#include <stdio.h>

int main() {
    char grade;

    scanf("%c", &grade);

    switch (grade) {
        case 'A': 
            printf("Genius");
            break;
        case 'B': 
            printf("Good");
            break;
        case 'C':
            printf("Try Harder");
            break;
        case 'D': 
            printf("Very Bad");
            break;
        case 'F': 
            printf("Fail");
            break;

        case 'a': 
            printf("Genius");
            break;
        case 'b': 
            printf("Good");
            break;
        case 'c':
            printf("Try Harder");
            break;
        case 'd': 
            printf("Very Bad");
            break;
        case 'f': 
            printf("Fail");
            break;

        default:
            printf("Invalid Input");

    }

    return 0;

}
