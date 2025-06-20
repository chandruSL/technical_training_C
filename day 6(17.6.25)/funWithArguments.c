// 17/6/25
// FUNCTIONS
// swaping two numbers using functions
//with arguments

#include <stdio.h>

int swap(int a,int b) {
    a^=b;//a=2,b=7
    b^=a;//a=2,b=5
    a^=b;//a=7,b=5
    return a;
}
int main(){
    int a=5,b=7;
    printf("%d ",swap(a,b));
    return 0;
}
/*
7 
*/