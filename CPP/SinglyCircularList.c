#include <stdio.h>
#include <memory.h>

struct Node
{
  int Data;
  struct Node *Next;
};

int add_beg();
int add_bet();
int add_end();
int del_beg();
int del_bet();
int del_end();
int show();


int add_beg()
{
  int value;
}
int add_bet(){}
int add_end(){}
int del_beg(){}
int del_bet(){}
int del_end(){}
int show(){}

int main()
{
  int ch;
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
      system("CLS");
      exit(0);
      break;
    default:
      printf("Wrong Operation....");
      break;
    }
  } while (ch <= 7);
}