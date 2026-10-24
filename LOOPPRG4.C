//wap that print 65 66 67 68 ....90
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=26;i++)
	{

		printf("%d ",i+64);
	}

	getch();
}