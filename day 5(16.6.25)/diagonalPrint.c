// 16/6/25  nested for loop

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s",str);
    
    for(int i=0; i<strlen(str); i++){
        for(int j=0; j<strlen(str); j++){
            (i==j || j==strlen(str)-i-1) ? printf(" %c",str[i]) : printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*
 ip=bob
 op:
 b   b
   o
 b    b
 
 same 12345
*/