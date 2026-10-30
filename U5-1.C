//wap to find out additon of two value using UDF.
#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
	return a + b;
}
void main()
{
	int a,b,sum;
	clrscr();

	printf("\n Enter value of A and B : ");
	scanf("%d%d",&a,&b);

	sum= add(a,b);

	printf("\n addition of A and B is %d",sum);

	getch();

}