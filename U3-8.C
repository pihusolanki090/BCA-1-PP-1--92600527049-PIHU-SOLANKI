//wap to input year and find whether year is leap year or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();

	printf(" \n Enter any year :");
	scanf("%d",&x);

	if ( (x % 4 == 0) && (x % 100 !=0) || (x % 400 ==0) )
	{
		printf("\n This year is leap year");
	}
	else
	{
		printf("\n This year is not leap year");
	}

  getch();
}