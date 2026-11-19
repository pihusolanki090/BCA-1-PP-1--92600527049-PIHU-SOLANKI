//wap that find out reverse of number using UDF.
#include<stdio.h>
#include<conio.h>

int reverse(int num1);

void main()
{
	int num,rev;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&num);

	rev= reverse(num);

	printf("\n Reversed number is %d",rev);

	getch();

}
int reverse(int num1)
{
	int lastnum1,rev1=0;
	while(num1>0)
	{
		lastnum1 = (num1 % 10);
		rev1= (rev1 * 10) + lastnum1;
		num1= num1 /10;
	}
	return(rev1);
}
