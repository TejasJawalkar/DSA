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
void add_bet();
void add_end();
void del_beg();
void del_bet();
void del_end();
void show();

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

void add_bet()
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

void del_beg()
{
	temp=start;
	if(temp==NULL)
	{
		printf("\nList is null no item found to delete.....\n");
		return;
	}
	printf("Delete at begin...\n");
	start=temp->next;

	printf("%d",temp->data);

	free(temp);
}

void del_end()
{
	temp=start;
	if(temp==NULL)
	{
		printf("\nList is null no item found to delete.....\n");
		return;
	}

	if(temp->next==NULL)
	{
		printf("\n%d is deleted\n",temp->data);
		free(start);
		free(temp);
		start=NULL;
	}

	else
	{
	while(temp->next!=NULL)
	{
		curr=temp;
		temp=temp->next;
	}
	printf("\n%d is deleted\n",temp->data);
	curr->next=NULL;
	free(temp);
	}
}

void show()
{
	temp = start;

	if(temp==NULL)
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

void del_bet()
{
	int ch;
	if(start==NULL)
	{
		printf("\nList is null no items found to delete....\n");
	}
	else
	{
	printf("\nEnter the job you want delete.....\n");
	scanf("%d",&ch);
	temp=start;
	while(temp->data!=ch && temp->next!=NULL)
	{
		curr=temp;
		temp=temp->next;
	}
	curr->next=temp->next;
	printf("\n%d is Deleted....\n",temp->data);
	free(temp);
	}
}

void main()
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
			printf("\nWrong Operation\n");
		}
	} while (ch <= 8 && ch!=0);

	getch();
}
