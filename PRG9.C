// wap that explain conditional operator without max variable
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,max;
	clrscr();

	printf("\n Enter any two number :");
	scanf("%d%d",&x,&y);

	(x > y) ? printf("\n x is max "):printf("\n y is max");

	getch();

}