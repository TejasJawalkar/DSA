#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

void addbeg();
void show();
int val;


struct node {
	struct node *prev;
	int data;
	struct node *next;
}*start, *temp, *curr, *newnode,*trail;

void add_beg();
void add_bet();
void add_end();
void del_start();
void del_end();
void del_bet();
void show();

void add_beg()
{
	printf("\nEnter the Value\n");
	scanf("%d",&val);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	if(start==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
		start=newnode;
	}
	else
	{
		newnode->prev=NULL;
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
	}
	printf("\n");
}

void add_end()
{
	printf("\nEnter the value\n");
	scanf("%d",&val);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	temp=start;
	while(temp->next!=NULL)
	{
		curr=temp;
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	newnode->prev=temp;
}

void add_bet()

{
	int chk=0;
	printf("\nEnter value...\n");
	scanf("%d",&val);
	printf("\nWhere you want to place value after value\n");
	scanf("%d",&chk);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;

	temp=start;
	while(temp->data<chk && temp!=NULL)
	{
		curr=temp;
		if(temp->data!=chk)
			temp=temp->next;
	}
	newnode->prev=temp->prev;
	newnode->next=curr->next;
	curr->next=newnode;
	temp->prev=newnode;
}

void del_start()
{

	if(start==NULL)
	{		printf("Linked List is null.....");
	}
	else
	{
		curr=start;
		temp=start->next;
		temp->prev=NULL;
		printf("%d is delete from start of linked list",start->data);
		free(start);
		delete temp;
	}
}

void del_end()
{
	temp=start;
	if(temp==NULL)
	{
		printf("\nLinked list is empty \n");
	}
	else
	{
		if(temp->next==NULL && temp->prev==NULL)
		{
			printf("%d is delete from list..\n",start->data);
			delete temp;
			delete start;
		}
		else
		{
			while(temp!=NULL)
			{
				curr=temp;
				temp=temp->next;
			}
			printf("%d is delete from list..\n",temp->data);
			curr->next=NULL;
			temp->prev=NULL;
			delete temp;
		}
	}
}

void del_bet()
{       int chk=0;
	
	printf("Enter value to delete");
	scanf("%d",&chk);
	if(start==NULL)
	{
		printf("\nLinked List is null....\n");
	}
	else
	{
		temp=start;
		while(temp->data!=chk)
		{
			curr=temp;
			trail=temp->next;
			temp=temp->next;
		}
		curr->next=trail;
		trail->prev=curr;
		printf("%d is delete from list....",temp->data);
		delete temp;
	}
}

void show(){	
	printf("\nDoubly linked list\n");
	temp=start;
	if(temp==NULL)
	{
		printf("\nLinked is null no data to show.....\n");
	}
	do{
		printf("<-%d|%d|%d->",temp->prev,temp->data,temp->next);
		temp=temp->next;
	}while(temp!=NULL);
}


int main()
{
int ch;
	do
	{
		printf("\n\nSelect Operation\n");
		printf("1.Add_at_start\t2.Add_in_between\t3.Add_at_end\t4.Del_at_start\n5.Del_at_Between\t6.Del_at_End\t7.Show\t8.Exit\n");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			add_beg();
			break;
		case 2:add_bet();
			break;
		case 3:add_end();
			break;
		case 4:del_start();
			break;
		case 5:del_bet();
			break;
		case 6:del_end();
			break;
		case 7:
			show();
			break;
		case 8:
			exit(0);
			break;
		default:
			printf("\nWrong Operation\n");
		}
	} while (ch <= 8 && ch!=0);

return 0;
}

