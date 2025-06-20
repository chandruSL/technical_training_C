// 18/6/25
//FUNCTIONS
//call by reference 

#include <stdlib.h>
#include <stdio.h>

void hi(int *pt){
    *pt+=1;//10+1=11
}
void hello(char *pt){
    *pt+=1;//D+1=E
}
int main(){
    int a=10;
    char ch='D';
    hi(&a);
    hello(&ch);
    printf("%d",a);
    printf("%c",ch);
    return 0;
}
/*
11E
*/