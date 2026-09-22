// wap that input number an d check whether the number is positive,negative or zero.
#include<stdio.h>
#include<conio.h>

void main()
{
	float num;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%f",&num);

	if(num > 0)
	{
		printf("\n Number is positive");

	}
	else if (num < 0)
	{
		printf("\n Number is negative");

	}
	else
	{
		printf("\n Number is zero");

	}

	getch();

}