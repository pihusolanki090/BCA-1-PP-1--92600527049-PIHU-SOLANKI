//wap to calculate sqaure and cube of any number
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,s,c;
	clrscr();

	printf("\n Enter any value :");
	scanf("%d",&x);

	s = x * x;
	c = x * x * x;

	printf("\n sqaure = %d",s);
	printf("\n cube   = %d",c);

	getch();
}