// 21/6/25
//ARRAY
//max of array

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of an Array :");
    scanf("%d",&n);
    
    int arr[n];
    int arr2[n];
    int m=0;
    //get array values from user
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if ( arr[i]>m )
        m=arr[i];
    }
    printf("%d",m);
    
    return 0;
}
/*
Enter the size of an Array :5
1 5 41 254 458
458
*/