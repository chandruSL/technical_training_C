// 19/6/25
// Function pointer

#include <stdio.h>
void hello(){
    printf("Hello\n");
}

int main() {
    void (*funptr)()=hello; 
    funptr();
    printf("%p\n",funptr);
    
    return 0;
}
/*
Hello
0x401136
*/