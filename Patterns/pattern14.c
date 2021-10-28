//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
void main()
{
    for (int i = 5, k = 1; i >= 1; i--, k++)
    {
        for (int j = k; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}