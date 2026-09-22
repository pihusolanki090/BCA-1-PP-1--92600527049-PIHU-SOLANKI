//wap that input three values from user and find maximum
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,z;
	clrscr();

	printf("\n Enter any three values : ");
	scanf("%d%d%d",&x,&y,&z);

	if(x < y && x < z)
	{
		printf("\n Minimum value is x : %d",x);
	}
	else if(y < x && y < z)
	{
		printf("\n Minimum value is y : %d",y);
	}
	else
	{
		printf("\n Minimum value is z : %d",z);
	}
	getch();
}