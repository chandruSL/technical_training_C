// 17/6/25
// FUNCTIONS
// swaping two numbers using functions with XOR operater
//with return

#include <stdio.h>

int swap() {
    int a=5,b=7;
    a^=b;//a=2,b=7
    b^=a;//a=2,b=5
    a^=b;//a=7,b=5
    return a;

}
int main(){
    printf("%d ",swap());
    return 0;
}
/*
7 
*/