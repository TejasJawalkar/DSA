#include<stdio.h>
#include<conio.h>
#define SIZE1 100

void main()
{
	int  a1[SIZE1],a2[SIZE1],a3[SIZE1],sum,i,j,limit1,limit2,maxlimit=0,carry=0;
	//get first array limit
	printf("\nEnter Limit for Array 1\n");
	scanf("%d",&limit1);
	//get second array limit
	printf("\nEnter Limit for Array 2\n");
	scanf("%d",&limit2);

	printf("\nEnter First Array\n");
	for(i=0;i<=limit1;i++)
	{
		scanf("%d",&a1[i]);
	}

	printf("\nEnter Second Array\n");
	for(i=0;i<=limit2;i++)
	{
		scanf("%d",&a2[i]);
	}

	if(limit1>limit2)
	{
		maxlimit=limit1;
	}
	else
	{
		maxlimit=limit2;
	}

	for(i=0;i<=maxlimit;i++)
	{
		sum=a1[i]+a2[i]+carry;
		if(sum>=10)
		{
			carry=sum/10;
			sum=sum%10;
		}
		else
		{
			carry=0;
		}
		a3[i]=sum;
	}

	printf("\n\nAddition\t");
	for(i=0;i<=maxlimit;i++)
	{
		printf("|%d|",a3[i]);
	}

	if(carry!=0)
	{
		printf("carry overflowed=%d",carry);
	}
	getch();
}