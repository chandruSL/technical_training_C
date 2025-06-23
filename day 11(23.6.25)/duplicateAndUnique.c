// 23/6/25
//ARRAY
//print duplicate numbers and unique numbers

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
    for (int i=0; i<n-1; i++){
        int count = 0;
        if(arr2[i]) continue;
        for(int j=i+1; j<n; j++){
            if(arr[j] == arr[i]){
                arr2[j]=1;
                count++;
            }
        }
        if(count > 0){
            printf("%d\n",arr[i]);
        }else{
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
/*
Enter the size of an Array :5 
1 2 3 1 1
duplicate num : 1
unique num : 2 3 
*/