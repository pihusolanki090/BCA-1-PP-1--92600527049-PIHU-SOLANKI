// wap to calculate the area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	float rad,a;
	clrscr();
	printf("enter radius of circle :");
	scanf("%f",&rad);

	a= 3.14 * rad * rad;
	printf("area of circle is %.2f\n",a);

	getch();
}