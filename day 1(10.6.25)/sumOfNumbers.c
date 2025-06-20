// 10/06/2025
//sum of numbers
#include <stdio.h>

int main() {
    /* input=12345  , output=1+2+3+4+5 */
    int a=12345;
    int sum=0;
    while(a>0){
        sum=sum+(a%10);
        //printf("%d",a%10);//reminder of the given number
        //printf("%d",a/10);//remove the last number
        a=a/10;
        //printf("%d\n",sum);
    }
    printf("%d",sum);

    return 0;
}