// 11/06/2025
//Greatest among 3 numbers using ternary operater

#include <stdio.h>

int main() {
    int a=2,b=6,c=1;
    a>b && a>c ? printf("A is greater") : b>c && b>a ? printf("B is greater") : printf("C is greater");

    return 0;
}