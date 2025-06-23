// 23/6/25
// 2D  ARRAY
//input from user

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
3
1 2 3 4 5 6 7 8 9
123
456
789
*/