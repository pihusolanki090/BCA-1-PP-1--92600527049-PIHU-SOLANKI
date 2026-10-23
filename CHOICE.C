// menu driven program to perform all arithmetic operation.
#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	float num1,num2,result;
	clrscr();

	printf("Enter first number :");
	scanf("%f",&num1);

	printf("Enter second number :");
	scanf("%f",&num2);

	printf("\n------ Arithmetic Opration -----\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multipliction\n");
	printf("4. Divison\n");

	printf("\n Enter you choice (1-4) :");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
		   result = num1+num2;
		   printf("Addition = %.2f",result);
		   break;

		case 2:
		   result = num1-num2;
		   printf("Substraction = %.2f",result);
		   break;

		case 3:
		   result = num1*num2;
		   printf("Multiplication = %.2f",result);
		   break;

		case 4:
		   if(num2 !=0)
		   {
			result = num1/num2;
			printf("Division = %.2f");
		   }
		   else
		   {
			printf("Division  by zero is not possible");
		   }
		   break;

		   default:
		      printf("\n Invalid choice");
		   }
		   getch();
}
