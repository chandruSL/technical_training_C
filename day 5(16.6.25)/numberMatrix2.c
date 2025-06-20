// 16/6/25  nested for loop
// nested for loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            (i+j+1)<=n ? printf("%d",i+j+1) : printf("%d",i+j+1-n);
        }
        printf("\n");
    }
    return 0;
}
/*
5
12345
23451
34512
45123
51234
*/