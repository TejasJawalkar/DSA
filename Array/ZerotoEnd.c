// Two-pointer approach to move all zeros to the end of the array with sorted non-zero elements

#include <stdio.h>

#define MAX 100

void main()
{
  int arr[MAX], n, i, left = 0, right;
  system("cls");

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  left = 0;
  right = n - 1;

  while (left < right)
  {

    while (left < n && arr[left] != 0)
      left++;

    // Find non-zero from right
    while (right >= 0 && arr[right] == 0)
      right--;

    // Swap if left < right
    if (left < right)
    {
      swap(&arr[left], &arr[right]);
      left++;
      right--;
    }
  }

  printf("Array after moving zeros to the end:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  return 0;
}