// 18/6/25
//Types of pointers
//Dangling pointer

#include <stdlib.h>
#include <stdio.h>

int main(){
    int *dptr = malloc(sizeof(int));
    printf("%p\n",dptr);
    *dptr = 35;
    printf("%p\n",dptr);
    printf("%d\n",*dptr);
    free(dptr);
    dptr=NULL;
    printf("%d\n",*dptr);
    printf("%p\n",dptr);
    
    return 0;
}
/*
0x163092a0
0x163092a0
35
Segmentation fault
*/