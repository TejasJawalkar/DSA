#include<stdio.h>
#include<stdlib.h>

struct Node
{
  struct Node *Prev;
  int Data;
  struct Node *Next;
};

struct Node *Start, *NewN, *Temp = NULL, *Trail = NULL, *Curr = NULL;

int add_beg();
int add_bet();
int add_end();
int del_beg();
int del_bet();
int del_end();
int show();

int add_beg(){}

int add_bet(){}

int add_end(){}

int del_beg(){}

int del_bet(){}

int del_end(){}

int show(){}


int main()
{
  int ch;
  system("cls");
  do
  {
    printf("\nSelect Operation\n");
    printf("1.Add_at_start\t2.Add_in_between\t3.Add_at_end\t4.Del_at_start\n5.Del_at_Between\t6.Del_at_End\t7.Show\t8.Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {

    case 1:
      add_beg();
      break;
    case 2:
      add_bet();
      break;
    case 3:
      add_end();
      break;
    case 4:
      del_beg();
      break;
    case 5:
      del_bet();
      break;
    case 6:
      del_end();
      break;
    case 7:
      show();
      break;
    case 8:
      exit(0);
      break;
    default:
      printf("Wrong Operation....");
      break;
    }
  } while (ch <= 8);
  return 0;
}