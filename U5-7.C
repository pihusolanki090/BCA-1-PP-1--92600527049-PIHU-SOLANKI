#include<stdio.h>
#include<conio.h>

int prime(int N);
void main()
{
	int x;
	clrscr();

	printf("\n Enter Number :");
	scanf("%d",&x);

	prime(x);

	getch();
}
int prime(int N)
{
	int i,count =0;
	for(i = 1; i <= N;i++)
	{
		if( N % i == 0)
		{
			count++;
		}
       }

       if (count == 2)
		printf("Number is prime");
       else
		printf("Number is not prime");

       return 0;
}