//wap that print first 10 nutural number with their sqaureand cube.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	printf("\n using for loop");
	printf("\n NO.\tSQUARE\tCUBE");

	for(i=1;i<=10;i++)
	{
		printf("\n%d\t%d\t%d",i,i*i,i*i*i);
	}
	printf("\n using while loop");
	printf("\n NO.\tSQUARE\tCUBE");


       j=1;
	while(j<=10)
	{
		printf("\n%d\t%d\t%d",j,j*j,j*j*j);
		j++;
	}
	getch();
}