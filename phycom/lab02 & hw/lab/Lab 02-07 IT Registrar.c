#include <stdio.h>

int main() {
    char fname[30], sname[30];
    int id;
    int dd, mm, yyyy; //bday
    // int gpa1, gpa2; // ไม่แน่ใจว่าไม่ได้เพราะเทส 3.000001 รึเปล่า
    float gpa3;

    scanf("%s", &fname);
    scanf("%s", &sname);
    scanf("%d", &id);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // scanf("%d.%d", &gpa1, &gpa2);
    scanf("%f", &gpa3);
    

    printf("Fullname: %s %s", fname, sname);
    printf("\nID: %.8d", id);
    printf("\nDOB: %.2d-%.2d-%.4d", dd, mm, yyyy);

    // printf("\nGPA: %.1d.%.2d", gpa1, gpa2);
    printf("\nGPA: %.2f", gpa3);

    return 0;
}