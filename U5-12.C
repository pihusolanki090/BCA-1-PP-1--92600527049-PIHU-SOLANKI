//u5-12
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	//#include<stdio.h>includes functions such as
	// printf()and scanf()for input and output

	//#include<conio.h>includes functions such as
	// clrscr() and getch()

	printf("\n Enter number :");
	scanf("%d%d",&x,&y);

	printf("sum is %d ", x + y);

	getch();
}