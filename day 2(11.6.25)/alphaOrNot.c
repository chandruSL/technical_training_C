// 11/06/2025
// Alphabet or not

#include <stdio.h>

int main() {
    // alphabet or not
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