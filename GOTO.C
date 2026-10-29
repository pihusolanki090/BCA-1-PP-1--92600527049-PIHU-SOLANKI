//wap that print 1 to 10 number without loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	clrscr();

	mag:

		printf(" %d \n",i);
		i++;

	if(i==11)
	{
		goto b;
	}
	else
	{
		goto mag;
	}

	b:

		printf("\n Thank You");

	getch();


}