// 17/6/25
// pyramid print 4
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int s=0; s<=(n-i-1);s++){
            printf(" ");
        }
        for(int j=0; j<(i*2+1); j++){
            printf("%d",abs(j-i));
        }
        printf("\n");
    }
    return 0;
}

/*
5
     0
    101
   21012
  3210123
 432101234
*/