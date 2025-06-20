// 18/6/25
// POINTER

#include <stdlib.h>
#include <stdio.h>

int main() {
    int a=20;
    int *pointer=&a;//* = size of the value
    printf("%p\n",pointer); // %p - using address , &a - address of a
    printf("%p\n",&a);
    printf("%d\n",a);
    printf("%d\n",*pointer);//*p - return the value
    
    
    char ch='c';
    char *charptr=&ch;
    printf("%c\n",ch);
    printf("%p\n",charptr);
    
    int *ptr=malloc(sizeof(int));
    *ptr=10;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

    return 0;
}
/*
0x7ffe263bbf64
0x7ffe263bbf64
20
20
c
0x7ffe263bbf63
0x3ff4c6b0
10
*/