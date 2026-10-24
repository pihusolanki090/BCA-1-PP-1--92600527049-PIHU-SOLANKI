//wap that print 5 10 15 20 25 ....N
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N;
	clrscr();
	printf("\n Enter value of N :");
	scanf("%d",&N);

	for(i=5;i<=N;i=i+5)
	{
		printf("\n %d",i);
	}

	getch();
}