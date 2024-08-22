#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int height[SIZE], limit, i;

int maxArea(int height[], int n)
{
  int left = 0;
  int right = n - 1;
  int max_area = 0;

  while (left < right)
  {
    // Calculate the area between left and right
    int current_area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);

    // Update max_area if current_area is greater
    if (current_area > max_area)
    {
      max_area = current_area;
    }

    // Move the pointer pointing to the shorter line
    if (height[left] < height[right])
    {
      left++;
    }
    else
    {
      right--;
    }
  }

  return max_area;
}

int main()
{
  system("cls");
  printf("\nEnter Array Limit\n");
  scanf("%d", &limit);

  printf("\nEnter Array Elements...\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d", &height[i]);
  }

  int result = maxArea(height, limit);
  printf("The maximum area is %d\n", result);

  return 0;
}
