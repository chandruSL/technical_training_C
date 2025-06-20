// 17/6/25
// diagonal print 4

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            j==i ? printf(" %d",i+1) : (i+j)==n-1 ? printf(" %d",j+1) : printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*
5
 1    5
  2  4 
   3  
  2  4 
 1    5
*/