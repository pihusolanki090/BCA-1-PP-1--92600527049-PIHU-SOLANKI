//define symbolic constant
#include<stdio.h>
#include<conio.h>

#define PI 3.14
#define pf printf

void main ()
{

	float r= 3,a;
	clrscr();
	a= PI * r * r;
	pf("%.2f is the area of circle",a);

	getch();
}