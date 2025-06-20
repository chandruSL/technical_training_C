// 12/6/25
//check if 3 sides form a triangle , check triangle condition : z+b>c = right, a=b=c equalent or not triangel

#include <stdin.h>

int main(){
    int a,b,c;
    printf("Enter the num(A,B,C):");
    scanf("%d %d %d",&a,&b,&c);
    a==b && b==c ? printf("equal")  : (a+b>c || a+c>b || b+c>a) ? printf("right angle") : printf("not triangle");
    return 0;
}