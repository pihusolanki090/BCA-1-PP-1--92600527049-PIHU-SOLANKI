//wap that print 200 198 196 .....180
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for (i=200;i>=180;i=i-2)
	{
		printf("%d  ",i);
	}

       getch();
}