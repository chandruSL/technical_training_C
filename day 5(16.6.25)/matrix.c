// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("(%d.%d)",i,j);
        }
        printf("\n");
    }
    return 0;
}
/*
(0.0)(0.1)(0.2)(0.3)
(1.0)(1.1)(1.2)(1.3)
(2.0)(2.1)(2.2)(2.3)
(3.0)(3.1)(3.2)(3.3)
*/