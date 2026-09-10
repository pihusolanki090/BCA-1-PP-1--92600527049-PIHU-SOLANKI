//wap tp display number is odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&x);

	x=x % 2;

	if(x % 2==0)
	{
		printf(" \n This number even");

	}
	else
	{
		printf("\n This number is odd");

	}

	getch();


}