#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int lista[5] = {9,8,3,4,2};
    int len = 5;

      for (int i = 0; i < len; i++)
      {
         for (int j = 0; j < len - 1; j++)
         {
            if(lista[j] > lista[j + 1])
            {
               int temp = lista[j];
               lista[j] = lista[j + 1];
               lista[j + 1] = temp;
            }
         }

      }
      for(int i = 0; i < len; i++)
      {
          printf("%i ", lista[i]);
      }
}



