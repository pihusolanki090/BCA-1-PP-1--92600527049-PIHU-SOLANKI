//wap that takes input roll  number,marks of 5 subject and find out total,percentage,result and grade
#include<stdio.h>
#include<conio.h>

void main ()
{
	int r_no,r;
	float m1,m2,m3,m4,m5,t,p;
	char grade;
	clrscr();


	printf("\n Enter your roll no. :");
	scanf("%d",&r_no);

	printf("\n Enter 5 subject marks :");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

	t =(m1 + m2 + m3 + m4 + m5);
	p = t/5.0;

	printf("\n Your percentage :%.2f",p);

	if(p >=90)
		grade = 'A';

	else if(p >=75)
		grade = 'B';
	else if (p >=60)
		grade = 'C';

	else if (p >=45)
		grade = 'D';

	else if (p >=35)
		grade = 'E';

	else
		grade = 'F';

	printf("\n your grade is : %c",grade);

	if (p >=35)
	{
		printf("\n You are pass");
	}
	else
	{
		printf("\n You are fail");
	}


	getch();
}