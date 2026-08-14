//wap which takes input of one character and display it's ascii code
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();

	printf("\n Enter any character :");
	scanf("%c",&x);

	printf("\n inputed character is : %c",x);
	printf("\n ASCII  code is :%d",x);

	getch();

}