# `%[^\n]` ใน c (lab06-04)
เวลาต้องรับ input ที่จำเป็นต้องมีเว้นวรรค จะใช้ `%s` ไม่ได้ ให้ใช้ `%[^\n]` แทน
```c
scanf("%s", &word);
       ^^
เปลี่ยนเป็น
scanf("%[^\n]", &word);
        ^^^^^
```

# char
string คือ char array ที่ต้องประกาศที่เผื่อ `\0` 1 ช่อง (เข้าใจถูกไหมไม่รู้แต่จดไว้ก่อน ผิดเดี่ยวมาแก้)

```c
char word[จำนวนตัวอักษร + 1];
```

```c
char word[6]; // 'h', 'e', 'l', 'l', 'o', '\0'
        ตำแหน่ง :  0    1    2    3    4    5
        จำนวนตัว : 1    2    3    4    5   (6)
```

ก็คือ **ถ้าตัวอักษรมีเท่าไหร่ + 1 ไปด้วย**  
https://youtu.be/S7K9y-A0fxc?si=e1hboIM6FciiJta7

# char array
```c
char char_array[กี่ชุด][แต่ละชุดมีกี่ตัวอักษร]
```
```c
#include <stdio.h>

int main() {
    char char_array[3][6] = {{"hellok"}, {"hi"}, {"hell"}};
//  char char_array[กี่ชุด][กี่ตัวอักษร]

    printf("%s ", char_array[0]);
    printf("%s", char_array[1]);
    printf("%s ", char_array[2]);

    return 0;
}
```

# lab 06-05 tolower / hw 06-03 / lab06-01 sizeof()

