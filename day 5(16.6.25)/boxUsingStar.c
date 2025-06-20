// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            (i==0 || i==n-1 || j==0 || j==n-1) ? printf(" *") : printf("  ");
        }
        printf("\n");
    }
    return 0;
}
/*
9
 * * * * * * * * *
 *               *
 *               *
 *               *
 *               *
 *               *
 *               *
 *               *
 * * * * * * * * *
*/