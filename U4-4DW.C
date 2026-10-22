//wap that print 100 99 98 .....90 by using do while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=100;
	clrscr();

	do
	{
		printf("%d  ",i);
		i--;
	}while(i>=90);

       getch();
}