// 17/6/25
// butterfly pattern

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    
    n = (n * 2) + 1; 
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Upper half
            if (i <= mid) {
                if (j <= i || j >= n - i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            // Lower half
            else {
                if (j <= n - i - 1 || j >= i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}


/*
Enter the value of N : 5
*         *
**       **
***     ***
****   ****
***** *****
***********
***** *****
****   ****
***     ***
**       **
*         *
*/