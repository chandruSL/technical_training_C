// 12/6/25
 //swap two numbers using temp var

#include <stdin.h>

int main(){
    int a=10,b=5,temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d  %d",a,b);
    return 0;
}