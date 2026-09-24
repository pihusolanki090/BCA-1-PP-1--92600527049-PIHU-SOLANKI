// wap that explain conditional operator
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,max;
	clrscr();

	printf("\n Enter any two number :");
	scanf("%d%d",&x,&y);

	max= (x > y)? x : y;

	printf("\n max = %d",max);

	getch();

}