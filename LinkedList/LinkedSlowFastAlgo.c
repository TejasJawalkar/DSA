#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *start = NULL, *next = NULL, *curr = NULL, *newnode, *temp = NULL;

int val, i;

void add_beg();
void add_circular();
void add_end();
void find_circular();

void add_beg()
{
  printf("\nEnter the value\n");
  scanf("%d", &val);
  newnode = (struct node *)malloc(sizeof(struct node));
  if (start == NULL)
  {
    newnode->next = NULL;
    newnode->data = val;
    start = newnode;
  }
  else
  {
    newnode->next = start;
    newnode->data = val;
    start = newnode;
  }
}

void add_circular()
{
  int ch;
  printf("\nEnter value\n");
  scanf("%d", &val);
  printf("\nEnter value where want to save\n");
  scanf("%d", &ch);
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = val;

  temp = start;

  while (temp->data < ch && temp->next != NULL)
  {
    curr = temp;
    temp = temp->next;
  }
  newnode->next = temp;
  curr->next = newnode;
}

void add_end()
{
  printf("\nEnter value\n");
  scanf("%d", &val);
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = val;
  newnode->next = NULL;
  temp = start;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;
}

void find_circular()
{
  temp = start;

  if (temp == NULL)
  {
    printf("\nList is null no item found to view.....\n");
    return;
  }
  printf("\nValue of Linked List\n");
  while (temp != NULL)
  {
    if (temp->next == NULL)
      printf("%d->X", temp->data);
    else
      printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  int ch;
  system("cls");
  do
  {
    printf("\nSelect Operation\n");
    printf("1.Add_at_start\t2.Add_in_Circular\t3.Add_at_end\t4.find_circular\t5.Exit\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      add_beg();
      break;
    case 2:
      add_circular();
      break;
    case 3:
      add_end();
      break;
    case 4:
      find_circular();
      break;
    case 5:
      exit(0);
      break;
    default:
      printf("\nWrong Operation\n");
    }
  } while (ch <= 5 && ch != 0);

  return 0;
}
