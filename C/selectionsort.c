#include<stdio.h>
#define SIZE 100 

int selectionsort[SIZE],no,i,j,k,limit,min;

int sort(int arr[],int max);
void swap(int *one,int *two);

int sort(int arr[],int max)
{
  for (i = 0; i < max-1; i++)
  {
    min=i;
    for (j = i+1;j < max; j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    if(min!=i)
    {
      swap(&arr[i],&arr[min]);
    }

    //printing array
    printf("\n\nArray in Pass %d\t",  i);
    for (k = 0; k < max; k++)
    {
      printf("|%d|",arr[k]);
    }
    printf("\n");
  }
  return 0;
}

void swap(int *one,int *two)
{
  int temp;
  temp=*one;
  *one=*two;
  *two=temp;
}

int main()
{
  printf("\nEnter Limit of Array\n");
  scanf("%d",&limit);

  printf("\nEnter Array Elements...\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d",&selectionsort[i]);
  }

  printf("\nArray Before Sorting...\n");
  for (i = 0; i < limit; i++)
  {
    printf("|%d|",selectionsort[i]);
  }

  sort(selectionsort,limit);
  
  printf("\n");
  return 0;
}