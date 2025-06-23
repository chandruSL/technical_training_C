
// 21/6/25
//ARRAY
//Linear sort descending

#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,45,7};
    for (int i=0; i<sizeof(arr)-1; i++){
        for(int j=i+1; j<5; j++){
            if(arr[j] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
/*
45
7
3
2
1
*/