// 12/6/25
//alphabet or number or symbol

#include <stdin.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    ch>='A' && ch<='Z' || ch>='a' && ch<='z' ? printf("Its an alphabet") : ch>='0' && ch<='9' ? printf("Its a number ") : printf("Its a special character");
    return 0;
}