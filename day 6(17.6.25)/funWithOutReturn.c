// 17/6/25
// FUNCTIONS
// swaping two numbers using functions
//without return

#include <stdio.h>

//function definition
void swap() {
    int a=5,b=7;
    a^=b;//a=2,b=7
    b^=a;//a=2,b=5
    a^=b;//a=7,b=5
    printf("%d %d",a,b);

}
int main(){
    //function call
    swap();
    return 0;
}
/*
7 5
*/