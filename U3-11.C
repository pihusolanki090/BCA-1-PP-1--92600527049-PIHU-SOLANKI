// wap that input an character from user and find out that charaxcter is vowel or not
#include<stdio.h>
#include<conio.h>

void main ()
{
	char ch;
	clrscr();

	printf("\n Enter any character :");
	scanf("%c",&ch);

	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n %c is a vowel",ch);
	}
	else
	{
		printf(" %c is consonant",ch);
	}
	getch();
}