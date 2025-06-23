// 23/6/25
//ARRAY
//smallest number

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of an Array :");
    scanf("%d",&n);
    
    int arr[n];
    int arr2[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr2[i]=0;
    }
    for (int i=0; i<n; i++){
        int val = -1;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i] && val < arr[j]){
                val = arr[j];
            }
        }
        printf("%d ",val);
    }

    return 0;
}
/*
Enter the size of an Array :7
10 5 7 2 1 6 8
8 2 6 1 -1 -1 -1 
*/