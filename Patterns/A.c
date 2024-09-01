#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,j;
  system("cls");
  printf("A=\n\n");
  for ( i = 1; i <=5 ; i++)
  {
    for ( j = 1; j <=9; j++)
    {
      if((j==6-i)||(i==3&&j>=3&&j<=7)||(j==4+i))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}