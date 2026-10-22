//wap that print 2 4 6.... 20 by using do while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=2;
	clrscr();

	do
	{
		printf("%d  ",i);
		i=i+2;
	}while(i<=20);


	 getch();
}