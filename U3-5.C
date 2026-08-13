//wap  that input 2 values from user and check both are equal or not
#include<stdio.h>
#include,conio.h>

void main
{
	int x,y;
	clrscr;

	printf("Enter any 2 number:");
	scanf("%d%d",&x,&y);

	if(x == y)
	{
		printf("Both are equal");

	}
	else
	{
		printf("BOth are not eqaul");
	}
	getch();
}