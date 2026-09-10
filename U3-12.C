// wap that find out character is in uppercase or lowercase.
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	printf("\n Enter any character:");
	scanf("%c",&ch);

	if(ch >='A'&& ch <= 'Z')
	{
		printf("\n %c is uppercase",ch);
	}
	else
	{

		printf("\n %c is lowercase ",ch);
	}

	getch();
}