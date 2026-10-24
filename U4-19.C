//wap that input number and find out factorial of given number.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,fact = 1;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&N);

	printf("\n factorial value of %d! is : ",N);

	while(N > 1)
	{
		fact = fact * N;
		printf("%d * ",N);
		N--;
	}
	printf("1 = %d ",fact);

	getch();
}