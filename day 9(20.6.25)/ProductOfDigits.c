// 20/6/25
// Number  crunching or number based problems
// product of digits

#include <stdio.h>

int main() {
    int val,p=1;
    scanf("%d",&val);
    while(val>0){
        p*=val%10;
        val/=10;
    }
    printf("%d",p);

    return 0;
}
/*
521
10 // 5*2*1
*/