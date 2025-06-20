// 20/6/25
// Number  crunching or number based problems
// heighest palindrome

#include <stdio.h>
#include <stdlib.h>

int pal(int num) {
    int rev=0,temp=num;
    while(temp){
        rev = rev*10 + temp%10;
            temp/=10;
    }
    return rev == num;
}
int main(){
    int val;
    scanf("%d",&val);
    int low=val-1,max=val+1;
    while(1){
        if(pal(max)){
            printf("%d",max);
            break;
        }
        if(pal(low)){
            printf("%d",low);
            break;
        }
        low--;
        max++;
    }
    return 0;
}
/*
154
151
*/