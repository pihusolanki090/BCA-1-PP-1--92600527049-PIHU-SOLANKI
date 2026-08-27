//wap u-3-10 input character if it is capital convert into small else into capital
#include<stdio.h>
#include<conio.h>

void main()
{
	 char ch;
	 clrscr();

	 printf("\n  Enter any character:");
	 scanf("%c",&ch);

	 if (ch>= 'A' && ch <= 'Z')
	 {
		ch= ch + 32;
		printf("\n Converted to lowercase:%c",ch);
	 }

	 else if (ch >= 'a' && ch <= 'z')

	 {
		ch= ch-32;
		printf("\n Converted to uppercase:%c",ch);
	 }

	 else
	 {
		printf(" \n  not an alphabet");
	 }

	 getch();
}