// 14/06/2025
// FOR LOOP

#include <stdio.h>
#include <string.h>

int main() {
    
    //Prime or not
    int num;
    scanf("%d",&num);
    for(int i=2; i<num;i++){
        if(num%i==0){
            printf("not prime");
            break;
        }else{
            printf("prime");
        }
    }
    
    return 0;
}