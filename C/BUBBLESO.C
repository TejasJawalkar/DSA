//stack using array implementation
#include<stdio.h>
#include<conio.h>
#define SIZE 100
int a[SIZE],no,i,sorted,j,temp;

void main()
{
clrscr();

printf("\nEnter Array Limit....\n");
scanf("%d",&no);

printf("\nEnter Array Elements....\n");
for(i=0;i<=no-1;i++)
{
	scanf("%d",&a[i]);
}

printf("\n\n\nArray Elements Before Sorting....\n");
for(i=0;i<=no-1;i++)
{
 printf("%d\t",a[i]);
}

//sorting algorithm
for(i=0;i<no-1;i++)
{
	sorted=0;
	for(j=0;j<no-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			sorted=1;
		}
	}

if(sorted==0)
{
  break;
}
}
printf("\n\n\nArray Elements After Bubble Sorting....\n");
for(i=0;i<=no-1;i++)
{
	printf("%d\t",a[i]);
}

getch();
}
