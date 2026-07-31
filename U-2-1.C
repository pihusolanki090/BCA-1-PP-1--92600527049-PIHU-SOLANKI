//wap to calculate area of rectangle
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,z;
	clrscr();

	printf("enter length :");
	scanf("%d",&x);

	printf("enter breadth :");
	scanf("%d",&y);

	z=(x * y);
	printf(" area of rectangle : %d\n",z);

	getch();

}