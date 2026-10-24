//wap that input number and find out number is armstrong or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,r,tem,sum=0;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&N);

	tem = N;

	while(N > 0)
	{
		r = N  % 10;
		sum = sum + (r * r * r);
		N = N / 10;
	}
	if(tem == sum)
	{
		printf("\n Inputed number is armstrong number");
	}
	else
	{
		printf("\n Inputed number is not armstrong number");
	}

	getch();
}
