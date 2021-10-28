// 54321
// 5432
// 543
// 54
// 5
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}