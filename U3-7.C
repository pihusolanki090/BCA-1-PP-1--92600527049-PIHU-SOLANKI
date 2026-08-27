//wap   of u-3-7 to calculate discount in rupees according to the condition.
#include<stdio.h>
#include<conio.h>

void main()
{
	float p,q,t,d,pay;
	clrscr();

	printf("\n Enter price of item :");
	scanf("%f",&p);

	printf("\n Enter quantity :");
	scanf("%f",&q);

	t= p * q;

	if (t >= 1000)
	{
		d= t * 0.15;
	}
	else
	{
		d= t * 0.10;

	}
	pay = t - d;

	printf("\n total purchase :Rs.%.2f",t);
	printf("\n discount       :Rs.%.2f",d);
	printf("\n final payment  :Rs.%.2f",pay);

	getch();
}