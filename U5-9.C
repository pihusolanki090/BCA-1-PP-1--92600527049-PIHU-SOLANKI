// u5-9
#include<stdio.h>
#include<conio.h>

float area(float x,float y);
void main()
{
	float l,b,a;
	clrscr();
	printf("\n Enter Length and breadth of rectangle :");
	scanf("%f%f",&l,&b);

	a = area(l,b);

	printf("\n Area of rectangle : %2.f",a);

	getch();
}
float area(float x,float y)
{
	return x * y;
}