//input month in number and print in text(for example input 1 then output january)
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x;
	clrscr();

	printf("\n Enter any number from 1 to 12 : ");
	scanf("%d",&x);

	if(x==1)
	{
		printf("\n Month is JANUARY");
	}
	else if(x==2)
	{
		printf("\n Month is FEBRUARY");
	}

	else if(x==3)
	{
		printf("\n Month is MARCH");
	}

	else if(x==4)
	{
		printf("\n Month is APRIL");
	}

	else if(x==5)
	{
		printf("\n Month is MAY");
	}

	else if(x==6)
	{
		printf("\n Month is JUNE");
	}

	else if(x==7)
	{
		printf("\n Month is JULY");
	}

	else if(x==8)
	{
		printf("\n Month is AUGUST");
	}

	else if(x==9)
	{
		printf("\n Month is SEPTEMBER");
	}

	else if(x==10)
	{
		printf("\n Month is OCTOBER");
	}

	else if(x==11)
	{
		printf("\n Month is NOVEMBER");
	}
	else if(x==12)
	{
		printf("\n Month is DECEMBER");
	}
	else
	{
		printf("\n THIS IS INVALID MONTH NUMBER");
	}

	getch();
}