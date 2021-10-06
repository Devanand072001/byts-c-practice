// a
// a b
// a b c
// a b c d
// a b c d e 
#include <stdio.h>
void main(){
    for(char i = 'a'; i <= 'e'; i++){
        for(char j = 'a'; j <= i; j++){
            printf(" %c ", j);
        }
        printf("\n");
    }
}