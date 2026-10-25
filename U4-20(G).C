//(G) wap to display following pyramid using loop(up to N terms).
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,N,c=1;
	clrscr();

	printf("\n Enter N term :");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N-i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}

	getch();
}