// 10/06/2025
//Binary to decimal converter

#include <stdio.h>

int main() {
    char binary[100];
    int decimal = 0;
    int base = 1;
    int len = 0;
    
    printf("Enter a binary num starting with 1:");
    scanf("%s",binary);
    
    if (binary[0] != '1'){
        printf("Invalid input: Binary must start with 1.\n");
        return 1;
    }
    
    while (binary[len] != '\0'){
        if (binary[len] != '0' && binary[len] != '1'){
            printf("Invalid input: Only 0 and 1 allowed.\n");
            return 1;
        }
        len++;
    }
    
    for (int i = len - 1; i >= 0; i--){
        if (binary[i] == '1'){
            decimal += base;
        }
        base *= 2;
    }
    
    printf("Decimal equivalent is: %d\n",decimal);
    return 0;
}