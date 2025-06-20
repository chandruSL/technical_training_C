// 19/6/25
// Number  crunching or number based problems
// count the digits of number

#include <stdio.h>


int main() {
    int a,c=0;
    scanf("%d",&a);

    while(a>0){
        c++;
        a/=10;
    }
    printf("%d",c);
    return 0;
}
/*
100000
6
*/