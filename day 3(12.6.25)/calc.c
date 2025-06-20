// 12/6/25
//switch case . by using this build calculator

#include <stdin.h>

int main(){
    int a=10,b=5;
    char ch;
    printf("Enter the operatoor:");
    scanf("%c",&ch);
    switch(ch){
        case '+':{
            printf("%d",a+b);
            break;
        }
        case '-':{
            printf("%d",a-b);
            break;
        }
        case '*':{
            printf("%d",a*b);
            break;
        }
        case '/':{
            printf("%d",a/b);
            break;
        }
        case '%':{
            printf("%d",a%b);
            break;
        }
        default:{
            printf("Invalid");
        }
    }
    return 0;
}