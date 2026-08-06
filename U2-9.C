//wap to interchange two number without using 3rd varible
#include<stdio.h>
#include<conio.h>

void main()
{

	int x,y;
	clrscr();
	printf("\n Enter value of x :");
	scanf("%d", &x);

	printf("\n Enter value of y :");
	scanf("%d", &y);

	x = x + y;
	y = x - y;
	x = x - y;

	printf("\n after interchange : x =%d,y =%d " ,x,y);

	getch();
}

