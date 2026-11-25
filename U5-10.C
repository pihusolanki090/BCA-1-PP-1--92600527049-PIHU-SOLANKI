// u 5 -10
#include<stdio.h>
#include<conio.h>

float area(float x);
void main()
{
	float r,a;
	clrscr();
	printf("\n Enter radius od circle : ");
	scanf("%f",&r);

	a = area(r);

	printf("\n area of circle :%.2f");

	getch();
}
float area(float x)
{
	return 3.14 * x * x;

}