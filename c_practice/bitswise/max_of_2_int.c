#include <stdio.h>
void main(){
    int a = 10, b = 20;
    int c = a - b;
    int d = c >> 15;
    int max = a + d * c;
    printf("%d\n", max);
}