// h
// h e 
// h e l 
// h e l l 
// h e l l o
#include <stdio.h>
void main(){
    char hello[] = "hello";
    for(int i = 0; hello[i]; i++){
        for(int j = 0; j <= i; j++){
            printf("%2c", hello[j]);
        }
        printf("\n");
    }
}