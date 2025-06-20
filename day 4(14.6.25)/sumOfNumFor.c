// 14/06/2025
// FOR LOOP

#include <stdio.h>
#include <string.h>

int main() {
    
    //sum of numbers
    //ip=5     op=15
    int num,old=0;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        old+=i;
    }
    printf("%d",old);
    
    return 0;
}