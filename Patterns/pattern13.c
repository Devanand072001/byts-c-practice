//     5
//    54
//   543
//  5432
// 54321
#include <stdio.h>
int main()
{
    for (int i = 5, k = 1; i >= 1; i--, k++)
    {
        for (int j = k; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}