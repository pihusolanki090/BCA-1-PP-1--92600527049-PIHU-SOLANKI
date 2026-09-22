//wap that input three values from user and find maximum
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,z,max;
	clrscr();

	printf("\n Enter any three values : ");
	scanf("%d%d%d",&x,&y,&z);

	if(x > y && x > z)
	{
		printf("\n Maximum value is x : %d",x);
	}
	else if(y > x && y > z)
	{
		printf("\n Maximum value is y : %d",y);
	}
	else
	{
		printf("\n Maximum value is z : %d",z);
	}
	getch();
}