//wap that print multiple table of inputed number by using do while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,N;
	clrscr();

	printf("\n Enter value of N :");
	scanf("%d",&N);

	do
	{
		printf("\n %d * %d = %d\n  ",N,i,N * i);
		i++;
	}while(i<=10);

	getch();

}