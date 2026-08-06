// wap that quantity, price, discount and display final amount
#include<stdio.h>
#include<conio.h>

void main()
{
	float  q,p,d,t,fa,drs;
	clrscr();
	printf("\n Enter Q,P,D ");
	scanf("%f%f%f",&q,&p,&d );

	t = q * p ;
	drs = t * d/100 ;
	fa = t - drs ;

	printf("\n quantity :%.2f",q);
	printf("\n price :%.2f",p);
	printf("\n discount :%.2f",d);
	printf("\n total :%.2f",t);
	printf("\n discount in rupees :%.2f",drs);
	printf("\n final amount :%.2f",fa);

	getch();
}


