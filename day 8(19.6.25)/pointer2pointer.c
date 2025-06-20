// 19/6/25
// pointer to pointer

#include <stdio.h>

int main() {
    
    int a=10;
    int *p=&a;
    int **p1=&p;
    
    printf("Address of A %p \n",p);
    printf("Address of P %p \n",p1);
    printf("Address of P %p \n",*p1);
    printf("Value of A %d \n",**p1);
    printf("Value of A %d \n",*p);
    return 0;
}
/*
Address of A 0x7fff0e855184 
Address of P 0x7fff0e855178 
Address of P 0x7fff0e855184 
Value of A 10 
Value of A 10 
*/