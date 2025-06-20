// 18/6/25
//Types of pointers
//Void pointer

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=0;
    void *ptr = &a;
    printf("%p",ptr);//address
    printf("%d",*ptr);//value
    //void gives the address . but it doesn't give the value
    
    return 0;
}
//0x7fff5e83b7b4

/*
ERROR!
/tmp/NpzfP95esL/main.c: In function 'main':
/tmp/NpzfP95esL/main.c:9:17: warning: dereferencing 'void *' pointer
    9 |     printf("%d",*ptr);//value
      |                 ^~~~
/tmp/NpzfP95esL/main.c:9:17: error: invalid use of void expression
*/