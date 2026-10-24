//wap that print a to z using loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=26;i++)
	{

		printf("%c ",i+96);
	}

	getch();
}