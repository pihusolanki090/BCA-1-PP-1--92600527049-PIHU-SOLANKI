//wap that input number and find out reverse of number.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rev = 0,lastnum;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&num);

	while(num>0)
	{
		lastnum = num % 10;
		rev = (rev * 10) + lastnum;
		num = num / 10;
	}
	printf("\n reversed number is: %d",rev);

	getch();

}