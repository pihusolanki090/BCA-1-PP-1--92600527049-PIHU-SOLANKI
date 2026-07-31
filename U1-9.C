//wap to display that any number is odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n enter any number: ");
	scanf("%d",&x);
	y=x % 2;
	if(y==0)
	{
		printf("\n number is odd");
	}
	else
	{
		printf("\n number is even");
	}
	getch();
}