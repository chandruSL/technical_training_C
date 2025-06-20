// 19/6/25
// Number  crunching or number based problems
//reverse number as a one int val 

#include <stdio.h>

int main() {
    int a;
    int r=0;
    scanf("%d",&a);
    
    while (a!=0){
        r=(r*10)+(a%10);
        a/=10;
    }
    printf("%d",r);
    
    return 0;
}
/*
1234
4321
*/