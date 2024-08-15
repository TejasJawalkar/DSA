#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
}*start=NULL,*temp=NULL,*Curr=NULL,*Prev=NULL,*newn;

void add();
void show();
void reverse();

void add()
{
	int val;
	printf("\nEnter the value\n");
	scanf("%d",&val);
	newn=(struct node*)malloc(sizeof(struct node));
	newn->value=val;
	if(start==NULL)
	{
		newn->next=NULL;
		start=newn;
	}
	else
	{
		newn->next=start;
		start=newn;
	}
}

void show()
{
	printf("\nLinked List\n\n");
	temp=start;
	if(temp==NULL)
	{
		printf("\nLinked List is Null\n\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("|%d|%d|->",temp->value,temp->next);
			temp=temp->next;
		}
	}
	printf("\n");
}

void reverse()
{
	Curr=start;
	while(Curr!=NULL)
	{
		temp=Curr->next;
		Curr->next=Prev;
		Prev=Curr;
		Curr=temp;
	}
	start=Prev;

}

void main()
{
	int ch;
	do{
		printf("\nSelect Operation \t1. Add Node\t2.Show\t3.Show Reverse List\t4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add();break;
			case 2:show();break;
			case 3:reverse();break;
			case 4:exit(0);
			default:printf("\nWrong Choice....\n");
		}
	}while(ch<=4);
	getch();
}