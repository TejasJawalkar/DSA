#include <stdio.h>
#include<stdlib.h>

struct Node
{
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

int add_beg()
{
  int value;
  printf("\nEnter Node Value\n");
  scanf("%d", &value);

  NewN = (struct Node *)malloc(sizeof(struct Node));
  NewN->Data = value;

  if(Start==NULL)
  {
    Start=NewN;
    NewN->Next=Start;
  } 
  else
  {
    Temp=Start;
    Curr=Start;
    do
    {
      Temp=Temp->Next;
    } while (Temp->Next!=Start);
    Start=NewN;
    Start->Next=Curr;
    Temp->Next=Start;
  }
  return 1;
}

int add_bet()
{
  int value,no;
  Temp=Start;
  NewN=(struct Node *) malloc(sizeof(struct Node));
  if(Temp==NULL)
  {
    printf("\nCannot Insert..List is Null\n");
    return 0;
  }
  
  printf("\nEnter Value to Save in Node\n");
  scanf("%d",&value);

  printf("\nEnter Value to Search in Node\n");
  scanf("%d",&no);
  
  do
  {
    Curr=Temp;
    Temp=Temp->Next;
  }while (Temp->Data<no && Temp->Next!=Start); 
  
  if (Temp==Start)
  {
    printf("Value Enterd by you to Search is not Found");
    return 0;
  }
  NewN->Data=value;
  Curr->Next=NewN;
  NewN->Next=Temp;
  
  return 1;
}

int add_end()
{
  int value;
  Temp=Start;
  if(Temp==NULL)
  {
    printf("\nCannot Insert...\nList is Null...\n");
    return 0;
  }
  printf("\nEnter Node Value....\n");
  scanf("%d",&value);
  NewN=(struct Node*)malloc(sizeof(struct Node));

  NewN->Data=value;
  do 
  {
    Temp=Temp->Next;
  }while (Temp->Next!=Start);

  NewN->Next=Temp->Next;
  Temp->Next=NewN;
  return 1;
}

int del_beg()
{
  Temp=Start;
  if(Temp==NULL)
  {
    printf("\nCannot Delete...List is Null\n");
    return 0;
  }
  Temp=Start;
  Curr=Start;
  Start=Curr->Next;
  while (Temp->Next!=Start)
  {
    Temp=Temp->Next;
  }
  Temp->Next=Start;
  free(Curr);
  return 0;
}

int del_bet()
{
  return 1;
}

int del_end()
{
  return 1;
}

int show()
{
  Temp = Start;
  if (Temp == NULL)
  {
    printf("\nLinked List is Null\n");
    return 0;
  }
  printf("\nList =\n");
  do
  {
    printf("|%d|%p|->",Temp->Data,Temp->Next);
    Temp = Temp->Next;
  }while (Temp!=Start);
  printf("\n");
  return 1;
}

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
      exit(0);
      break;
    default:
      printf("Wrong Operation....");
      break;
    }
  } while (ch <= 8);
  return 0;
}