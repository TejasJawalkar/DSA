#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int colors[SIZE],limit,i,j;

void main()
{
  int c0,c1,c2=0;
  system("cls");

  printf("\n Enter Arrat Limit...\n");
  scanf("%d",&limit);

  printf("\n Enter Arrat Elements...\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d",&colors[i]);
  }
  return 0;
}