// Pascasl's triangle
//            1
//          1   1
//        1   2   1
//      1   3   3    1
//    1  4    6   4   1
//  1  5   10   10  5   1

#include <stdio.h>
int main()
{
   int num = 7;
   int coef = 1;
   for (int i = 0; i < num; i++)
   {
      for (int j = i; j <= num; j++)
      {
         printf("  ");
      }
      for (int j = 0; j <= i; j++)
      {
         if (j == 0)
            coef = 1;
         else
         {
            coef = coef * (i - j + 1) / j;
         }
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
