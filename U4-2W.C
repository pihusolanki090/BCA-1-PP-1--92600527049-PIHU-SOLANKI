//wap that print 2 4 6.... 20 using both for and while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	 printf("\n using for loop");
	for(i=2;i<=20;i=i+2)
	{
		printf(" %d  ",i);
	}

	 printf("\n using while loop");
	j=2;
	while(j<=20)
	{
		printf(" %d ",j);
		j=j+2;
	}

	 getch();
}