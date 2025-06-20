// 12/6/25
// maximum of three numbers

#include <stdin.h>

int main(){
    int a=2,b=3,c=4;
    a>b && a>c ? printf("A is greater") : b>a && b>c ? printf("B is greater") : printf("C is greater");
    return 0;
}