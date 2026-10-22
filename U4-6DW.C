//wap that print 1 10 2 9 3 8 4 7 5 6 5 7 4 8 3 9 2 10 1by using do while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	clrscr();
	do
	{
		printf("%d %d ",i,11-i);
		i++;
	}while(i<=10);

	getch();
}