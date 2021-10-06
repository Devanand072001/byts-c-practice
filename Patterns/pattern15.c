// 54321
//  4321
//   321
//    21
//     1
#include <stdio.h>
void main()
{
    for (int i = 5, k = 1; i >= 1; i--, k++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}