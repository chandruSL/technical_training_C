// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",i+j+1);
        }
        printf("\n");
    }
    return 0;
}
/*
5
12345
23456
34567
45678
56789
*/