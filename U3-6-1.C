//unit-3 (6-2) calculate gross salary by takes values form user.

#include<stdio.h>
#include<conio.h>

void main()
{
  float s,hr,ta,da,pf,gs,h,t,d,p;
  clrscr();

  printf("\n Enter basic salary :");
  scanf("%f",&s);

  if(s >= 5000)
  {
	hr= (s *0.05);
	ta=(s * 0.06);
	da=(s * 0.04);
	pf=(s * 0.05);


  }
  else
  {
	hr=(s * 0.04);
	ta=(s * 0.05);
	da=(s * 0.03);
	pf=(s * 0.04);



  }

  gs= s + hr + ta + da -pf;
  printf("\n gross salary is :%.2f",gs);
  printf("\n Hr Rs =%.2f",hr);
  printf("\n Ta Rs =%.2f",ta);
  printf("\n Da Rs =%.2f",da);
  printf("\n Pf Rs =%.2f",pf);




  getch();

}
