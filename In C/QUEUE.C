//linear queue
#include<stdio.h>
#include<conio.h>
#define SIZE 50

int queue[50],rear=-1,front=-1,no=0,val,i,ch;

void push();
void pop();
void show();

void push()
{
	clrscr();
	printf("\nEnter value to push...\n");
	scanf("%d",&val);
	if(rear==no)
	{
		printf("\nMemory is fool wait for some time....\n");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			rear=0;
			front=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=val;
		printf("\n%d is pushed into queue\n",val);
	}
}

void pop()
{
	clrscr();
	if(front==-1)
	{
		printf("\nQueue is Empty....\n");
	}
	else {
		val=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front+=1;
		}
		printf("%d Item Removed from queue",val);
	}
}

void show()
{
	clrscr();
	if(rear==-1 && front==-1)
	{
		printf("\nQueue is empty....\n");
	}
	else
	{
	printf("\nQueue Items\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d<-",queue[i]);
	}
	printf("\n");
	}
}

void main()
{
	clrscr();
	if(no==0)
	{
		printf("\nEnter Memory Limit....\n");
		scanf("%d",&no);
	}
	do{
	printf("\nSelect your Operation...\n");
	printf("\n1.Push\t2.Pop\t3.Show\t4.Exit\n");
	scanf("%d",&ch);
	 switch(ch)
	  {
	   case 1:push();    break;
	   case 2:pop();     break;
	   case 3:show();    break;
	   case 4:exit(0);   break;
	   default:printf("\nWrong Choice....\n"); break;
	  }
	}while(ch<=3);
	getch();
}