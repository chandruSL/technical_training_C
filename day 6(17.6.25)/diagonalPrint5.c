// 17/6/25
// diagonal print 5

#include <string.h>
#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",str);
    
    for(int i=0; i<strlen(str); i++){
        for(int j=0; j<strlen(str); j++){
            i==j ? printf(" %c",str[i]) : j==strlen(str)-i-1 ? printf(" %c",str[j]) : printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*
chandru
 c      u
  h    r 
   a  d  
    n   
   a  d  
  h    r 
 c      u
*/