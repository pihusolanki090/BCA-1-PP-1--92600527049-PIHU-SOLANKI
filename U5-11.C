// u 5-11
#include<stdio.h>
#include<conio.h>

#define sqr(x) ((x) *(x))

void main()
{
	int N,ans;
	clrscr();

	printf("\n Enter Number :");
	scanf("%d",&N);

	ans = sqr(N);
	printf("sqaure is %d",ans);

	getch();
}
