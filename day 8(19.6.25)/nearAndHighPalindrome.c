// 19/6/25
// Number  crunching or number based problems
// nearest and highest palindrome

#include <stdio.h>

int main() {
    int a,r,t;
    scanf("%d",&a);

    while(1){
        t=a;
        r=0;
        while(t>0){
            r=r*10 + t%10;
            t/=10;
        }
        if(r==a){
            printf("%d",a);
            break;
        }
        a++;
    }
    return 0;
}
/*
145
151
*/