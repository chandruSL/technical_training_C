// 11/06/2025
// print next alphabet 

#include <stdio.h>

int main() {
    // print the next value like a-b A-B
    char ch;
    printf("Enter a letter :");
    scanf("%c",&ch);
    
    if (ch =='Z' || ch=='z'){
        printf("%c",ch-25);
    }else{
        ch++;
    }
    printf("next letter %c\n",ch);
    
    return 0;
}