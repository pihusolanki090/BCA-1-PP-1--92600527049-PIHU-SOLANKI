//wap that takes 2 values from user and perform all arthimatic operation
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("\n Enter any 2 values :");
	scanf("%d%d",&a,&b);

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	printf("\n addition of a and b is %d",c);
	printf("\n substraction of a and b is %d",d);
	printf("\n multiplication of a and b is %d",e);
	printf("\n division of a and b is %d",f);

	getch();
}