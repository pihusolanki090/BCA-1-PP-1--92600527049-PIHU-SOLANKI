//wap to find out armtrong number upto series.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,tem,r,sum,num;
	clrscr();

	printf("\n Enter N term :");
	scanf("%d",&N);

	printf("Armstrong numbers are :");

	for(num=1;num<=N;num++)
	{
		tem =num;
		sum = 0;

		while(tem > 0)
		{
			r = tem % 10;
			sum = sum +(r * r * r);
			tem = tem / 10;
		}

		if(sum == num)
		{
			printf(" %d ",num);
		}
	}

	getch();
}