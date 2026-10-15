//wap that print1 to 10 with using both for and while loop.
#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,j;
	clrscr();

	printf("\n using for loop");
	for(i=1;i<=10;i++)
	{

		printf("\n %d",i );

	}
		printf("\n using while loop");
	j=1;
	while(j<=10)
	{

		printf("\n %d",j );
		j++;
	}
	 getch();
}