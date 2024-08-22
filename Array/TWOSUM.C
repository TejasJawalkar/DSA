#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void main()
{
	int ar[SIZE],j,i,no,limit,a1,a2,found=0;
	system("cls");
	printf("\nEnter array limit...\n");
	scanf("%d",&limit);

	printf("\nEnter Elements...\n");
	for(i=0;i<=limit;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter Sum Value\n");
	scanf("%d",&no);
	printf("\nAll Sums\n");
	for(i=0;i<=limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			printf("ar[%d]+ar[%d]=%d\n",ar[i],ar[j],ar[i]+ar[j]);
			if(ar[i]+ar[j]==no)
			{
				a1=ar[i];
				a2=ar[j];
				found=1;
			}
		}
		if(found==1) break;
	}
	if(found==0)
	{
		printf("\nArray has no numbers that will calculate the two sum\n");
	}
	else
	{
		printf("\nTwo Sum=\t%d+%d=%d\n",a1,a2,no);
	}
}