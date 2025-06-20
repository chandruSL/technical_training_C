// 12/6/25
//leap year or not

#include <stdin.h>

int main(){
    int year=2000;
    (year%4==0 && year%100!=0) || year%400==0  ? printf("Its a leap year") : printf("Its a not leap year");
    return 0;
}