#include <stdio.h>

#define SIZE 100

int sorting[SIZE], A1[SIZE], A2[SIZE], i, j, k;

void mergearray(int ar[], int p, int mid, int r)
{
  int n1 = mid - p + 1;
  int n2 = r - mid;

  for (i = 0; i < n1; i++)
  {
    A1[i] = ar[p + i];
  }
  for (j = 0; j < n2; j++)
  {
    A2[j] = ar[mid + 1 + j];
  }

  i = 0,j = 0,k = p;
  while (i < n1 && j < n2)
  {
    if (A1[i] <= A2[j])
    {
      ar[k] = A1[i];
      i++;
    }
    else
    {
      ar[k] = A2[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    ar[k] = A1[i];
    k++;
    i++;
  }

  while (j < n2)
  {
    ar[k] = A2[j];
    k++;
    j++;
  }
}

void mergesort(int ar[], int p, int r)
{
  if (p < r)
  {
    int mid = p + (r - p) / 2;
    mergesort(ar, p, mid);
    mergesort(ar, mid + 1, r);
    mergearray(ar, p, mid, r);
  }
}

int main()
{
  int limit;

  printf("\nEnter Array Limit...\n");
  scanf("%d", &limit);

  printf("\nEnter Array Elements...\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d", &sorting[i]);
  }

  printf("\nArray Elements Before Sort...\n");
  for (i = 0; i < limit; i++)
  {
    printf("|%d|", sorting[i]);
  }

  printf("\n");

  mergesort(sorting, 0, limit - 1);

  printf("\nArray Elements After Sort...\n");
  for (i = 0; i < limit; i++)
  {
    printf("|%d|", sorting[i]);
  }

  printf("\n");

  return 0;
}