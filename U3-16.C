//input day in number and printin text(for example input 1 then output monday)
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();

	printf("\n Enter any number from 1 to 7 : ");
	scanf("%d",&x);

	if (x==1)
	{
		printf("\n Day is MONDAY ");
	}
	else if(x==2)
	{
		printf("\n Day is TUESDAY");
	}
	else if(x==3)
	{
		printf("\n Day is WEDNESDAY");
	}
	else if(x==4)
	{
		printf("\n Day is THURSDAY");
	}
	else if(x==5)
	{
		printf("\n Day is FRIDAY");
	}
	else if(x==6)
	{
		printf("\n Day is SATURDAY");
	}
	else if(x==7)
	{
		printf("\n Day is SUNDAY");
	}
	else
	{
		printf("\n it's an invalid day number ");
	}

	getch();

}