// 12/6/25
// alphabet or not

#include <stdin.h>

int main(){
    char ch;
    printf("Enter a charecter :");
    scanf("%c",&ch); //&-address of the var , %c-inout in char
    if(ch >= 'A' && ch <= 'z'){
        printf("alphabet");
    }
    else{
        printf("not alphabet");
    }
    return 0;
}