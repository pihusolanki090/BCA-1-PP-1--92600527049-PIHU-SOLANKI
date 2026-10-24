//wap that print first 10 nutural number with their sqaureand cube.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	printf("\n NO.\tSQUARE\tCUBE\n");

	for(i=1;i<=10;i++)
	{
		printf("\n%d\t%d\t%d\n",i,i*i,i*i*i);
	}

	getch();
}