// 20/6/25
// Number  crunching or number based problems
// sum of factorial of each digits

#include <stdio.h>

int main() {
    int val,s=0;
    scanf("%d",&val);
    
    while(val>0){
        int m=val%10,fact=1;
        for(int i=1; i<=m; i++){
            fact*=i;
        }
        s+=fact;
        
        val/=10;
    }
    printf("%d",s);

    return 0;
}
/*
123
9 //(1*1)+(1*2)+(1*2*3)
*/