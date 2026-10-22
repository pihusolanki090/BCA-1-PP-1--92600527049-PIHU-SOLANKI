//wap that print multiple table of inputed number using both for and while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N,j;
	clrscr();

	printf("\n Enter value of N :");
	scanf("%d",&N);

	printf("\n using for loop");
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",N,i,N * i);
	}

	printf("\n using while loop");

	j=1;
	while(j<=10)
	{
		printf("\n%d * %d = %d",N,j,N*j);
		j++;
	}
	getch();

}