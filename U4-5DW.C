//wap that print 200 198 196 .....180 bu using do while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=200;
	clrscr();

	do
	{
		printf("%d  ",i);
		i=i-2;
	}while(i>=180);

       getch();
}