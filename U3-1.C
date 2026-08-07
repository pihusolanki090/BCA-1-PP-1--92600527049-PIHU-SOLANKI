//wap that inputs two values from user and find out maximum
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\n Enter value of a,b: ");
	scanf("%d%d",&a,&b);

	if(a == b)
	{
		printf("\n Both are equal");

	}
	else
	{
		printf("\n both are not equal");

		if(a > b)
		{
			printf(" \n a number is maximum");
		}
		else
		{
			 printf("\n b number is maximum");

		}

	}
	getch();
}
