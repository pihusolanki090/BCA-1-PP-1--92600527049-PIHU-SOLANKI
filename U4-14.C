//wap that input number and find out number is palindrome or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int N,tem,rev=0,lastnum;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&N);

	tem = N;

	while(N > 0)
	{
		lastnum = N % 10;
		rev = (rev * 10)+lastnum;
		N = N / 10;
	}

	printf("\n Reversed number is :%d",rev);

	if(tem == rev)
	{
		printf("\n Inputed number is palindrome");
	}
	else
	{
		printf("\n Inputed number is not palindrome");
	}

	getch();
}