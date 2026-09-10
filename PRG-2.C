//wap which input a number and check whether it is positive or negative
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x;
	clrscr();

	printf("\n  Enter any number :");
	scanf("%d",&x);

	if(x <= 0)
	{
		printf("\n This number is positive");

	}
	else
	{
		printf("\n This number is negative");
	}

	getch();
}