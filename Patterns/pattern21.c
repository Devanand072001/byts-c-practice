//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
//         1
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}