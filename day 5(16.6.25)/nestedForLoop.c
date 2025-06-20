// 16/06/2025
// NESTED FOR LOOP

#include <stdio.h>

int main() {
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

// nested for loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",i+1);
        }
        printf("\n");
    }

    return 0;
}