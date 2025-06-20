// 17/6/25
// diagonal print 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            (j==i || (i+j)==n-1) ? printf("* ") : printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*
5
*    * 
 *  *  
  *   
 *  *  
*    * 
*/
