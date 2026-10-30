//wap to fiind out factorial of number using UDF.
#include<stdio.h>
#include<conio.h>

int factorial(int N)
{
	long int i,fact = 1;

	for(i=1;i<=N;i++)
	{
		fact = fact * i;


	}
		return fact;
}
void main()
{
	 long int N,result;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&N);

	result = factorial(N);

	printf("\n factorial = %ld ",result);

	getch();

}