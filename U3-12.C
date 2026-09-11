// wap that find out character is in uppercase or lowercase.
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	printf("\n Enter any character:");
	scanf("%c",&ch);

	if(ch >='A'&& ch <='Z')
	{
		printf("\n %c is uppercase",ch);
	}
	else
	{
		if(ch >='a'&& ch <='z')
		{
			printf("\n %c is lowercase ",ch);
		}
		else
		{
		       //	printf("\n This is invalid character");

			if(ch >= '0' && ch <= '9')
			{
				printf("\n this is digit",ch);
			}
			else
			{
				printf("\n This is special character",ch);
			}

		}

	}

	getch();
}