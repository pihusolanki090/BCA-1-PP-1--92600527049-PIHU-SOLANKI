//wap which inetchange two number with using 3rd variable
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,z;
	clrscr();

	printf("\n Enter any two value :");
	scanf("%d%d",&x,&y);

	printf("\n  before interchange x= %d,y=%d",x,y);

	z=x;
	x=y;
	y=z;

	printf("\n After interchange x=%d,y=%d",x,y);

	getch();
}