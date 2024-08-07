// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int check = 0;
//     int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
//     int N[] = {1, 3, 9, 7, 11, 15, 19};

//     int length_m = sizeof(M) / sizeof(M[0]);
//     int length_n = sizeof(N) / sizeof(N[0]);

//     // printf("length_m = %d\n", length_m);
//     // printf("length_n = %d", length_n);

//     // printf("\n---------------------\n");



//     while (check != 1) {
//         int num;
//         scanf("%d", &num);

//         for (int i = 0; i < length_m; i++) {
//             if (num == M[i]) {
//                 printf("%d is in M at index [%d]\n", num, i);
//                 check = 1;
//                 break;
//             } else {
//                 // printf("no (n)\n");
//                 // break;
//             }
//         }

//         for (int i = 0; i < length_n; i++) {
//             if (num == N[i]) {
//                 printf("%d is in N at index [%d]\n", num, i);
//                 check = 1;
//                 break;
//             } else if (i == length_n - 1) {
//                 // printf("noooo\n");
//             } else {
//                 // printf("no (m)\n");
//                 // break;
//             }
//         }
//     }


//     return 0;
// }