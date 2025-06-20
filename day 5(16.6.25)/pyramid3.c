// 16/6/25  
// nested for loop
#include <stdio.h>
/*
n i s j     s=n-1  j=i*2-1
4 1 3 1     
4 2 2 3      
4 3 1 5      
4 4 0 7      
*/

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int s=0; s<=(n-i-1);s++){
            printf(" ");
        }
        for(int j=0; j<(i*2+1); j++){
            j<=i ? printf("%d",i-j) : printf("%d",j-i);
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