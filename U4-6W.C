//wap that print 1 10 2 9 3 8 4 7 5 6 5 7 4 8 3 9 2 10 1using both for and while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop");
	for (i=1;i<=10;i++)
	{
		printf(" %d %d ",i,11-i);

	}
	printf("\n using while loop");

	j=1;
	while(j<=10)
	{
		printf(" %d %d ",j,11-j);
		j++;

	}

	getch();
}