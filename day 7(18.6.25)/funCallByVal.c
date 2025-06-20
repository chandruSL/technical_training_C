// 18/6/25
//FUNCTION
//call by value

#include <stdlib.h>
#include <stdio.h>

void add(int a,int b){
    printf("%d\n",++a);
}
int main(){
    int a=10,b=9;
    add(a,b);
    printf("%d,%d",a,b);
    return 0;
}
/*
11
10,9
*/
