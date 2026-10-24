//wap that print A to Z using loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=26;i++)
	{

		printf("%c ",i+64);
	}

	getch();
}