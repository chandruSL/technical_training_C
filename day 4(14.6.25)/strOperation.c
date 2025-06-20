// 13/06/2025
//string operation

#include <stdio.h>
#include <string.h>

int main() {
    // input:aBcD#eF output:AbCd#Ef
    char str[100];
    printf("Enter a string :");
    scanf("%s",str);
    
    for(int i=0; i<strlen(str); i++){
        str[i]>='A' && str[i]<='Z' ? printf("%c",str[i]+32) : str[i]>='a' && str[i]<='z' ? printf("%c",str[i]-32) : printf("%c",str[i]);
    }
    

    return 0;
}