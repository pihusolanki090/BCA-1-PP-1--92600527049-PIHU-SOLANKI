//wap that input number and find out number is prime or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,i,flag=0;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&N);

	for(i = 2;i <= N / 2;i++)
	{
		if(N % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (N == 1)
	{
		printf("\n 1 is not a prime or composite number");
	}
	else
	{
		if(flag == 0)
		{
			printf("\n Input number is prime");
		}
		else
		{
		printf("\n Input number is not prime");
		}
	}
	getch();
}