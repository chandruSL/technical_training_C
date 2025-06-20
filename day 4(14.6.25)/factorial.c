// 14/06/2025
// FOR LOOP

#include <stdio.h>
#include <string.h>

int main() {
    
    //factorial
    //ip=5     op=120
    int num,old=1;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        old*=i;
    }
    printf("%d",old);
    
    
    //sum of factorial
    //ip=3    op=32
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        int fact=1;
        for(int j=1; j<=i+1; j++){
            fact*=j;
        }
        sum+=fact;
    }
    printf("%d",sum);
    
    return 0;
}