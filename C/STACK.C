#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100
#define RED "\033[31m"
#define BLUE "\033[34m"

int arr[SIZE],top=-1,val,no=0,ch,i;

void push();
void show();
void pop();

void pop()
{
	clrscr();
	if(top==-1)
	{
		printf(RED"\nStack is Empty.....\n");
	}
	else
	{
		val=arr[top];
		top--;
		printf(RED"%d is removed from stack...",val);
	}
}

void push()
{
  clrscr();

  printf("\nEnter your value\n");
  scanf("%d",&val);

  if(top==no)
  {
	printf(RED"\nCan't do Operation...\n");
	printf(RED"\nMemory is full...\n");
	system("pause");
  }
  else
  {
	top++;
	arr[top]=val;
  }
}

void show()
{
	clrscr();
	if(top==-1)
	{
		printf(RED"\nStack is Empty no item to show......\n");
	}
	else {
	printf("\nStack Value\n");
	for(i=top;i>-1;i--)
	{
		printf(BLUE"|%d|",arr[i]);
		printf("\n");
	}
	}
}

void main()
{
clrscr();
if(no==0){
	  printf(BLUE"\nEnter memory size\n");
	  scanf("%d",&no);
	  }
do{
	printf(BLUE"\nSelect Operation you want to perform on a Stack...\n");
	printf(BLUE"\n1.Push\t2.Pop\t3.Show\t4.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:push();   break;
		case 2:pop(); break;
		case 3:show();   break;
		case 4:exit(0);break;
		default:printf("\nWrong Operation....\n"); break;
	}
}while(ch<=4);

getch();
}