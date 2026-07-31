//wap that takes 3 values for principle amount,rate of interest and no. of years and find out simple interest.
#include<stdio.h>
#include<conio.h>

 void main()
 {
	float a,b,c,d;

	clrscr();
	printf("\n *********************");
	printf("\n enter value of principle amount :");
	scanf("%f",&a);

	printf(" \n enter value of rate of interest :");
	scanf("%f",&b);

	printf("\n enter number of years :");
	scanf("%f",&c);

	d=a * b * c /100 ;

	printf("\n  **********************");

	printf("\n  principle amount  : %.2f",a);
	printf("\n  rate odf interest : %.2f",b);
	printf("\n number of years    : %.2f",c);
	printf("\n  ***********************");
	printf("\n this is the simple interest : %.2f",d );

	getch();
}

