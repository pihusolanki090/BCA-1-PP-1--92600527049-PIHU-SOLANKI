//wap that print 100 99 98 .....90
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for (i=100;i>=90;i--)
	{
		printf("%d  ",i);
	}

       getch();
}