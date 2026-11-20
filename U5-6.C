//wap to findout number is armstrong or not using UDF.
#include<stdio.h>
#include<conio.h>

void arm(int N);
void main()
{
	int N,r,tem,sum;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&N);

	arm (N);

	getch();

}
void arm(int N)
{
	int r1,sum1=0,temp1;

	temp1 = N;
	while(N > 0)
	{
		r1= N % 10;
		sum1 = sum1 +(r1 * r1 * r1);
		N = N / 10;
	}
	if(temp1==sum1)
	{
		printf("\n Inputed number is armstrong number");
	}
	else
	{
		printf("\n Inputed number is NOT armstrong number");
	}
}