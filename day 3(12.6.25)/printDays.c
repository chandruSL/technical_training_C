// 12/6/25
//print day based on num p;

#include <stdin.h>

int main(){
    int day;
    char *days[]={"","sunday","monday","tuesday","wednesday","thersday","friday","saterday"};
    printf("Enter the number (1-7) :");
    scanf("%d",&day);
    day>0 && day<=7 ? printf("%s\n",days[day]) : printf("Invalid input");
    return 0;
}