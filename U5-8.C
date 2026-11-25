//u5-8
#include<stdio.h>
#include<conio.h>

int fibo(int N);

void main()
{
	int x;
	clrscr();

	printf("\n Enter limit : ");
	scanf("%d",&x);

	fibo(x);

	getch();
}
int fibo(int N)
{
	int a = 0, b = 1,c;
	printf("\n fibonacci series upto %d\n",N);

	while(a <= N)
	{
		printf("%d ",a);
		c = a + b;
		a = b;
		b = c;
       }
       return 0;
}


