#include<stdio.h>
#include<stdlib.h>

struct Node
{
  struct Node *Prev;
  int Data;
  struct Node *Next;
};

struct Node *Start=NULL, *NewN, *Temp = NULL, *Trail = NULL, *Curr = NULL;

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
  system("cls");
  printf("\nEnter Node Value...\n");
  scanf("%d" , &value);
  
  if(Start==NULL){printf("Start is null");};

  NewN=(struct Node*)malloc(sizeof(struct Node));
  NewN->Data=value;
  if(Start==NULL)
  {
    Start=NewN;
    Start->Next=Start;
    Start->Prev=Start;
  }
  else if(Start->Next==Start)
  {
    //when node has only one node
    Temp=Start;
    Start=NewN;
    Start->Next=Temp;
    Start->Prev=Temp;
    Temp->Prev=Start;
    Temp->Next=Start;
  }
  else
  {
    //when node has only multiple node
    Trail=Start;
    Temp=Start->Prev;

    Start=NewN;
    
    Trail->Prev=Start;
    Start->Next=Trail;

    Temp->Next=Start;
    Start->Prev=Temp;
  }
  return 1;
}

int add_bet()
{
  int value,value1;
  Temp=Start;
  system("cls");
  if(Temp==NULL)
  {
    printf("\nCannot Add...List is Null...\n");
    return 0;
  }
  printf("\nEnter the Node Value\n");
  scanf("%d",&value);
  
  printf("\n\nEnter the Value to Search and Place the value Node Before... \n");
  scanf("%d",&value1);
  
  NewN=(struct Node*)malloc(sizeof(struct Node));
  NewN->Data=value;

  do
  {
    Curr=Temp;
    Temp=Temp->Next;
  }while (Temp->Data<value1 && Temp->Next!=Start); 

  if(Temp==Start)
  {
    printf("\nSearching value is not found\n");
    return 0;
  }

  Curr->Next=NewN;
  NewN->Prev=Curr;
  NewN->Next=Temp;
  Temp->Prev=NewN;

}

int add_end()
{
  int value;
  system("cls");
  printf("\nEnter Node Value...\n");
  scanf("%d" , &value);
  
  if(Start==NULL){printf("List is null");};

  NewN=(struct Node*)malloc(sizeof(struct Node));
  NewN->Data=value;

  Temp=Start->Prev;
  Start->Prev=NewN;
  NewN->Next=Temp->Next;
  NewN->Prev=Temp;
  Temp->Next=NewN;

  return 1;
}

int del_beg()
{
  Temp=Start;
  if(Temp==NULL)
  {
    printf("\nCannot Delete...List is Null...\n");
    return 0;
  }
  if(Temp->Next==Start)
  {
    printf("%d is deleted and start is null",Temp->Data);
    free(Temp);
    Start=NULL;
  }
  else
  {
    Trail=Temp->Prev;
    Start=Temp->Next;
    Start->Prev=Trail;
    Trail->Next=Start;

    printf("%d is deleted from list...",Temp->Data);
    free(Temp);
  }
  return 1;
}

int del_bet()
{
  int value;
  Temp=Start;
  system("cls");
  if(Temp==NULL)
  {
    printf("\nCannot Delete...List is Null...\n");
    return 0;
  }
  
  printf("\nEnter the value to delete it from list...\n");
  scanf("%d",&value);

  do
  {
    Curr=Temp;
    Temp=Temp->Next;
  } while (Temp->Data!=value && Temp->Next!=Start);

  if(Temp==Start)
  {
    printf("\nValue your are searching for is not found in list..\n");
    return 0;
  }

  if(Temp->Next==Start)
  {
    Start=NULL;
    printf("\n%d is delete from list..\n",Temp->Data);
    free(Temp);
  }
  else 
  {
    Trail=Temp->Next;
    Curr->Next=Trail;
    Trail->Prev=Curr;
    printf("\n%d is delete from list..\n",Temp->Data);
    free(Temp);
  }


}

int del_end()
{
  Temp=Start;
  if(Temp==NULL)
  {
    printf("\nCannot Delete...List is Null...\n");
    return 0;
  }
  if(Temp->Next==Start)
  {
    printf("%d is deleted and start is null",Temp->Data);
    free(Temp);
    Start=NULL;
  }
  else
  {
    Temp=Start->Prev;
    Trail=Temp->Prev;
    Trail->Next=Temp->Next;
    Start->Prev=Temp->Prev;

    printf("%d is deleted and start is null",Temp->Data);
    free(Temp);
  }

}

int show()
{
  Temp=Start;
  system("cls");
  if(Temp==NULL)
  {
    printf("\nCannot Show...List is Null...\n");
    return 0;
  }
  do
  {
    printf("<-|%p|%d|%p|->",Temp->Prev,Temp->Data,Temp->Next);
    Temp=Temp->Next;
  } while (Temp!=Start);

  printf("\n\n");
  
}


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
      system("cls");
      exit(0);
      break;
    default:
      printf("Wrong Operation....");
      break;
    }
  } while (ch <= 8);
  return 0;
}