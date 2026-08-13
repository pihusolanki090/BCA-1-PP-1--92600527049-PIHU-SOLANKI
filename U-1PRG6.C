//wap whcih display  max no out of three
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("Enter any 3 values:");
	scanf("%d%d%d",&x,&y,&z);

	if(x > y)
	{
		printf("x number is largest");

	}
	else
	{
	       //	printf(" y number is largest");

		if(y > z)
		{
			printf("y number is largest");

		}
		else
		{
			printf("z number is largest");
		}
	}
	getch();