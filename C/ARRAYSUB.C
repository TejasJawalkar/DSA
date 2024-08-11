//Addition of Array Element Till Index Value Provided
#include<stdio.h>
#include<conio.h>
#define SIZE 100

void main()
{
	int ar[SIZE],no,index,sum=0,i;
	clrscr();
	printf("\nEnter size of array\n");
	scanf("%d",&no);
	printf("\nEnter array elements\n");
	for(i=0;i<=no;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEntered Array Elements\n");
	for(i=0;i<=no;i++)
	{
		printf("\nvalue %d at index %d",ar[i],i);
	}
	//logic for sum
	printf("\n\nEnter index value for sum\n");
	scanf("%d",&index);
	if(index>no)
	{
		clrscr();
		printf("\nIndex out of range\n");
	}
	else
	{
		for(i=0;i<=index;i++)
		{
			sum+=ar[i];
		}
		printf("\n%d is sum of elements till index\n",sum);
	}
	printf("\n");
	getch();
}