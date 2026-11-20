//wap to find out number is palindrome or not using UDF.
#include<stdio.h>
#include<conio.h>

void num(int N);

void main()
{
	int N,tem,rev,lastnum;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&N);
	num(N);

	getch();
}
void num(int N)
{
       int lastnum1,rev1=0,tem1;

       tem1=N;

       while(N>0)
       {
		lastnum1= N % 10;
		rev1 = (rev1 * 10) + lastnum1;
		N = N / 10;
       }
       printf("\n reversed number is %d",rev1);

       if(tem1==rev1)
       {
	       printf("\n Inputed number is palindrome");
       }
       else
       {
	       printf("INputed number is not palindrome");
       }


}