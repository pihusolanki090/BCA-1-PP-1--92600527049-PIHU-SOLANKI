//wap to find out prime number up to series.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,i,j,isprime;
	clrscr();

	printf("\n Enter thre limit :");
	scanf("%d",&N);

	printf("\n Prime number from 1 to %d are ",N);

	for(i = 2; i <= N;i++)
	{
		isprime = 1;
		for(j = 2; j * j <=i;j++)
		{
			if(i % j == 0)
			{
				isprime = 0;
				break;

			}
		}

		if(isprime ==1)
		{
			printf(" %d ",i);
		}

	}
	getch();


}