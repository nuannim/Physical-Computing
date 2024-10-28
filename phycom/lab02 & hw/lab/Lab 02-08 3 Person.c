#include <stdio.h>

int main() {
    char fname1[100], lname1[100];
    char fname2[100], lname2[100];
    char fname3[100], lname3[100];

    scanf("%s", &fname1);
    scanf("%s", &lname1);

    scanf("%s %s", &fname2, &lname2);
    scanf("%s %s", &fname3, &lname3);

    printf("Person 1: %s %s", fname1, lname1);
    printf("\nPerson 2: %s %s", fname2, lname2);
    printf("\nPerson 3: %s %s", fname3, lname3);

}
