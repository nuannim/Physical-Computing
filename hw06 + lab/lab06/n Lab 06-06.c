#include <stdio.h>

int main() {
    char char_array[4][6] = {{"hellok"}, {"hi"}, {"hell"}, {"Yooooo"}};
    // char char_array[กี่ชุด][กี่ตัวอักษร] = {{"hello"}, {"hi"}};

    // scanf("%s", &char_array[1]);

    printf("%s ", char_array[0]);
    printf("%s ", char_array[1]);
    printf("%s ", char_array[2]);
    printf("%s ", char_array[3]);

    return 0;
}