//wap input 3 values from user find out it's average
#include<stdio.h>
#include<conio.h>

void main ()
{
	float a,b,c,ave;
	clrscr();

	printf("\n Enter any 3 values :");
	scanf("%f%f%f",&a,&b,&c);

	ave= (a + b + c)/3.0;

	printf("\n %.2f is average",ave);

	getch();

}