// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>
/*
n i s(n-i)-1 j(i*2)+1
5 0 4        1 
5 1 3        3
5 2 2        5
5 3 1        7
5 4 0        9
*/

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int s=0; s<(n-i-1);s++){
            printf(" ");
        }
        for(int j=0; j<(i*2)-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
5
    
   *
  ***
 *****
*******
*/