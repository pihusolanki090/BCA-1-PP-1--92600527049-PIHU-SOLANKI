//wap that calculate sqaureroot of any number by UFD
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int x,y;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&x);

	y=sqrt(x);

	printf(" Squareroot of inputed number is %d ",y);

	getch();
}