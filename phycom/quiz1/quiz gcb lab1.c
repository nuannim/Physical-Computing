#include "stdio.h"

int main() { 
    int a = 17, b = 25, c = 50, d = 10;

    // Assignment Statements of Each Question

    //^ 1
    // -a++;
    // -++a;

    //^ 2
    // d = b % a + c / b;
    // d = b % a++ + c / b;
    // d = b % ++a + c / b;
    // d = b % (a + c) / b;

    //^ 3
    // d = a++ + b++ + c++;
    // d = ++a + ++b + ++c;

    //^ 4
    // c += ++a + b++;

    //^ 5
    // d = a *= c / b + 5;
    // d = (a *= c) / b + 5;

    //^ 6
    // b += a++;
    // b  += ++a;

    //^ 7
    // a += b *= c -= 5;
    // d = a += b *= c -= 5;

    //^ 8
    // a += a++;
    // a += ++a;

    return 0;
}