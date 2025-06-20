// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>
/*
n i s((n-i)-1)) j(i+1)
5 0 4           1 
5 1 3           2 
5 2 2           3
5 3 1           4
5 4 0           5
*/

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int s=0; s<(n-i-1);s++){
            printf(" ");
        }
        for(int j=0; j<(i+1); j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
5
    *
   **
  ***
 ****
*****
*/