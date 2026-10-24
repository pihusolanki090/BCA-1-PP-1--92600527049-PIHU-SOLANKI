//wap that print 1 0 2 0 3 0 ....N
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,N;
	clrscr();
	printf("\n Enter value of N :");
	scanf("%d",&N);

	for(i=1;i<=2*N;i++)
	{
		if(i%2==1)
		{
			printf("%d ",(i+1)/2);
		}
		else
		{
			printf("0 ");
		}
	}
	getch();
}