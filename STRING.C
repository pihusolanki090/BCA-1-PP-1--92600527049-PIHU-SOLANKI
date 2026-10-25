//wap that print name in pyramid using string.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,len;
	char name[15];
	clrscr();

	printf("\n Enter your name :");
	scanf("%s",&name);

	for(i=0;name[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c ",name[j]);
		}

		printf("\n");
	 }

	 getch();
}