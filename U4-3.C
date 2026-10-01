//wap that print 1 3 5 7 ....n.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N;
	clrscr();

	printf("\n Enter value of N :");
	scanf("%d",&N);

	for(i=1;i<=N;i=i+2)
	{
		printf("\n %d",i);
	}

	getch();

}