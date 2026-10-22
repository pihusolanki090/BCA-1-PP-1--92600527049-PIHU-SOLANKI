//wap that print 0 1 1 2 3 5 8 13....n
#include<stdio.h>
#include<conio.h>

void main()
{
	int i ,N,a=0,b=1,next;
	clrscr();

	printf("\n Enter value  N term :");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		printf("%d ",a);
		next = a + b;
		a= b;
		b= next;
	}

	getch();
}