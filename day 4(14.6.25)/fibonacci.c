// 14/06/2025
// FOR LOOP

#include <stdio.h>
#include <string.h>

int main() {
    
     //fib: 0112358     ip=5   op=01123
    int num,prev=0,cur=1,temp=0;
    scanf("%d",&num);
    printf("%d",prev);
    for(int i=0; i<=num; i++){
        printf("%d",cur);
        temp=prev+cur;
        prev=cur;
        cur=temp;
        
    }
    
    return 0;
}