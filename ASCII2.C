//wap which takes input of one character and display it's ascii  code and show next input character
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();

	printf("\n Enter any character :");
	scanf("%c",&x);

	printf("\n inputed character is : %c",x+1);
	printf("\n ASCII  code is :%d",x+1);

	getch();

}