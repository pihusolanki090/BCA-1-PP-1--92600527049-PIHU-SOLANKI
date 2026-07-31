//wap to input your percentage & display whether your result is pass or fail
#include<stdio.h>
#include<conio.h>
void main()
{
	float x;
	clrscr();
	printf("\n  enter perctange :");
	scanf("%f",&x);

	if (x<=35)
      {
	printf("\n fail");
      }
      else
      {
	printf("\n pass");
      }
      getch();
}
