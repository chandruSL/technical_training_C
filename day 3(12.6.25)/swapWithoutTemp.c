// 12/6/25
 //swap two numbers without temp var

#include <stdin.h>

int main(){
    int a=10,b=5;
    a+=b;
    b=a-b;
    a=a-b;
    printf("%d  %d",a,b);
    return 0;
}