#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void EnterNodeinL1();
void EnterNodeinL2();
void AddTwoLists();
void showlistdata();

struct Node1
{
  int data;
  struct Node1 *next;
} *start1 = NULL, *next1 = NULL, *NNode1 = NULL;

struct Node2
{
  int data;
  struct Node2 *next;
} *start2, *next2, *NNode2 = NULL;

int main()
{
  int ch;
  system("cls");
  do
  {

    printf("\nSelect Operation \n1. Enter value in List 1 \n2. Enter value in List 2 \n3. Show both nodes value \n4. Add Nodes \n5.Exit \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      EnterNodeinL1();
      break;

    case 2:
      EnterNodeinL2();
      break;

    case 3:
      showlistdata();
      break;

    case 4:
      AddTwoLists();
      break;

    case 5:
      system("cls");
      exit(0);
      break;

    default:
      system("cls");
      printf("Entered wrong choice.....\t\tExiting Program\n");
    }
  } while (ch <= 5 && ch != 0);
  getch();
  system("cls");
  return 0;
}

void EnterNodeinL1()
{
  int value;
  printf("\nEnter value in List 1\n");
  scanf("%d", &value);

  NNode1 = (struct Node1 *)malloc(sizeof(struct Node1));
  NNode1->data = value;
  NNode1->next = start1;
  start1 = NNode1;
}

void EnterNodeinL2()
{
  int value;
  printf("\nEnter value in List 2\n");
  scanf("%d", &value);

  NNode2 = (struct Node2 *)malloc(sizeof(struct Node2));
  NNode2->data = value;
  NNode2->next = start2;
  start2 = NNode2;
}

void AddTwoLists()
{
  struct Node1 *temp1 = start1;
  struct Node2 *temp2 = start2;
  int carry = 0, sum;

  system("cls");
  printf("\nAddition of two lists: \n");

  while (temp1 != NULL || temp2 != NULL || carry)
  {
    int val1 = (temp1 != NULL) ? temp1->data : 0;
    int val2 = (temp2 != NULL) ? temp2->data : 0;

    sum = val1 + val2 + carry;
    carry = sum / 10;
    printf("%d -> ", sum % 10);

    if (temp1 != NULL)
      temp1 = temp1->next;
    if (temp2 != NULL)
      temp2 = temp2->next;
  }
  printf("NULL\n");
}

void showlistdata()
{
  struct Node1 *temp1 = start1;
  struct Node2 *temp2 = start2;

  system("cls");

  printf("\nList 1 values: ");
  while (temp1 != NULL)
  {
    printf("%d -> ", temp1->data);
    temp1 = temp1->next;
  }
  printf("NULL\n");

  printf("List 2 values: ");
  while (temp2 != NULL)
  {
    printf("%d -> ", temp2->data);
    temp2 = temp2->next;
  }
  printf("NULL\n");
}