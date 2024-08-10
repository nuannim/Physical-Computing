# hw 06-02 histogram

## ชิบหาย 1
อยู่ ๆ ก็มี output ปริศนาที่เราไม่ได้กรอกแฝงตัวมา (อี M: 0) ตอนหลังมาเจอว่าเพราะไม่ได้ประกาศอะไรไว้ใน char array แบบนี้ `char alpha[27];`
```c
    char alpha[27]; // <<<
    int count[27] = {0};
```
มันเลยเหมือนไปเอาค่าเมมอะไรไม่รู้มา พอแก้เป็น `char alpha[27] = {0};`
```c
    char alpha[27] = {0}; // <<<
    int count[27] = {0};
```
เจ๊เขาก็หายเป็นปกติละ


<br>


## วิธีประกาศ arrays อีกแบบนึง (ที่อยากบอกตัวเองไว้)
ตอนแรกขยันมาก ประกาศแบบ
```c
    char alpha[27] = {0, 0, 0, 0, 0, 0 ... จนครบ 26 ตัว};
    int count[27] = {0, 0, 0, 0, 0, 0 ... จนครบ 26 ตัว};
```
พอเอาโค้ดไปถามพี่แชทเลยได้รู้ว่ามันเขียนแบบนี้ได้
```c
    char alpha[27] = {0};
    int count[27] = {0};
```
จบ **บอกตัวเอง**


<br>


## code ทั้งหมด
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char alpha[27] = {0};
    int count[27] = {0};
    int round = 0, countC = 0;
    char a_input;

    scanf("%d", &round);

    for (int i = 0; i < round; i++) {
        scanf(" %c", &a_input);
        a_input = tolower(a_input);
        
        for (int j = 0; j < 27; j++) {
            if (a_input == alpha[j]) {
                count[j] += 1;
                break;
            } else {
                //^ มีเลขอยู่ข้างใน
                if (isalpha(alpha[j])) {
                    continue;

                //^ ยังไม่มีเลขอยู่ข้างใน
                } else {
                    alpha[j] = a_input;
                    count[j] += 1;
                    countC += 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < countC; i++) {
        printf("%c: %d\n", alpha[i], count[i]);
    }

    return 0;
}
```