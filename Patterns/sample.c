//  *  *  *  *  *
//  *           *
//  *           *
//  *           *
//  *  *  *  *  *
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || j == 1 || i == n || i == 1)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}