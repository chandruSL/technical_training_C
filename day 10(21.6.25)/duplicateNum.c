// 21/6/25
//ARRAY
//print duplicate numbers

#include <stdio.h>

int main() {
    int arr[6] = {1,2,2,3,3,7};
    for (int i=0; i<sizeof(arr)-1; i++){
        for(int j=i+1; j<5; j++){
            if(arr[j] == arr[i]){
                printf("%d\n",arr[i]);
            }
        }
    }

    return 0;
}
/*
2
3
*/