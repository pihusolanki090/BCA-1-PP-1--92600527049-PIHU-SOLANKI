//wap that accept 10 numbers from user one by one and display total sum
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N,sum=0;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d ",&N);
		sum+=N;
	}

	printf("\n Total sum = %d\n",sum);

	getch();

}