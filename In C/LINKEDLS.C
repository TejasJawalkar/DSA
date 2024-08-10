#include<stdio.h>
#include<conio.h>

struct node {
	void *data;
	int datatype;
	struct node *next;
}*start=NULL,*temp,*newnode;

void addstart();
void show();

void addstart() {
    void *data;
    int ch;
    int data1; char data2; float data3;char *data4;
    clrscr();
    printf("\nSelect type of value you want save....\n1.Int\t2.Char\t3.Float\t4.String\n");
    scanf("%d", &ch);
    if(ch==1)
    {
      printf("\nEnter Integer Value\n");
      scanf("%d", &data1);
      data = malloc(sizeof(int));
      *(int*)data = data1;
    }
    else if(ch==2)
    {
      while (getchar() != '\n') {} // Clear input buffer
      printf("\nEnter Char Value\n");
      scanf(" %c", &data2); // Use a space before %c to skip whitespace
      data = malloc(sizeof(char));
      *(char*)data = data2;
    }
    else if(ch==3)
    {
      printf("\nEnter Float Value\n");
      scanf("%f", &data3);
      data = malloc(sizeof(float));
      *(float*)data = data3;
    }
    else if(ch==4)
    {
      printf("\nEnter String Value\n");
      scanf("%s", &data2);
      data = malloc(100 * sizeof(char));
      data = data4;
    }
    else
    {
	printf("\nIncorrect Choice....\n");
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
    newnode->data=data;
    newnode->datatype=ch;
    newnode->next=NULL;
    start=newnode;
    }
    else
    {
    newnode->data = data;
    newnode->datatype = ch;
    newnode->next = start;
    start = newnode;
    }
}


void show()
{       clrscr();
	temp=start;
	printf("\nFollwing is the output...\n");
	while(temp!=NULL)
	{
		switch(temp->datatype)
		{
			case 1:
				printf("%d->",*(int *)temp->data);break;
			case 2:
				printf("%c->",*(char *)temp->data);break;
			case 3:
				printf("%.2f->",*(float *)temp->data);break;
			case 4:
				printf("%s->",*(char *)temp->data);break;
		}
		temp=temp->next;
	}
}


void main()
{
int ch;
clrscr();

do{
printf("\n");
printf("\nselect your operation\n1. Add At Start\t2.Show Values\n");
scanf("\n%d",&ch);
switch(ch)
{
	case 1:addstart();break;
	case 2:show();break;
	default: printf("\nIncorect Choice....\n");break;
}
}while(ch<=2);

getch();
}
