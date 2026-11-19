//wap that calculate  power of any number.
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int x,y,anw;
	clrscr();

	printf("\n Enter value of exponent and base : ");
	scanf("%d%d",&x,&y);

	anw=pow(x,y);

	printf("\n answer is %d",anw);

	getch();

}