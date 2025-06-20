// 17/6/25
// diagonal print 2

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            (j==i || (i+j)==n-1) ? printf("%d",i+1) : printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*
5
1   1
 2 2 
  3  
 4 4 
5   5
*/