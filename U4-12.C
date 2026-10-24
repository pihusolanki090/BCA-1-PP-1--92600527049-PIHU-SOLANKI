//wap that input number and find out sum of digits.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,sum = 0;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&N);

	while(N>0)
	{
		sum = sum +(N % 10);
		N = N / 10;
	}

	printf("\n sum of all digit : %d",sum);

	getch();
}