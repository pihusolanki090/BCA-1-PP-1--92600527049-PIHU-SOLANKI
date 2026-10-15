//wap that print 100 99 98 .....90 using both for and while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop\t");

	for (i=100;i>=90;i--)
	{
		printf(" %d  ",i);
	}

	printf("\n using while loop\t");
	j=100;

	while(j>=90)
	{
		printf(" %d  ",j);
		j--;
	}
       getch();
}