// 23/6/25
//ARRAY
//nearest small num in an array

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
            if(arr[i] - arr[j] == 1){
                val = arr[j];
                break;
            }
        }
        printf("%d ",val);
    }

    return 0;
}
/*
Enter the size of an Array :5
3 1 2 5 4
2 -1 -1 4 -1 
*/