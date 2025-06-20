// 14/06/2025
// FOR LOOP

#include <stdio.h>
#include <string.h>

int main() {
    //Odd or Even
    int num;
    scanf("%d",&num);
    for(int i=1; i<num;i++){
        if(i%2==0){
            printf("%d Even\n",i);
        }else{
            printf("%d Odd\n",i);
        }
    }
    
    return 0;
}