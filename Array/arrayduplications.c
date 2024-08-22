//Remove duplicate value from array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
  int array[SIZE], i, j, limit,k;
  system("cls");

  printf("\nEnter the Limit...\n");
  scanf("%d", &limit);

  printf("\nEnter the Array Elements...\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d", &array[i]);
  }

  printf("\nEntered Array Before Duplication Removal Elements...\n");
  for (i = 0; i < limit; i++)
  {
    printf("|%d|",array[i]);
  }

  for (i = 0; i < limit-1; i++)
  {
    for (j = i+1; j < limit; j++)
    {
      if(array[i]==array[j])
      {
        for (k = j; k < limit-1; k++)
        {
          array[k]=array[k+1];
        }
        limit--;
        j--;
      }
    }
  }

  printf("\nEntered Array After Duplication Removal Elements...\n");
  for (i = 0; i < limit; i++)
  {
    printf("|%d|",array[i]);
  }

  return 0;
}