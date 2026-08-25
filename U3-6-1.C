//unit-3 (6-2) calculate gross salary by takes values form user.

#include<stdio.h>
#include<conio.h>

void main()
{
  float s,hr,ta,da,pf,gs,h,t,d,p;
  clrscr();

  printf("\n Enter basic salary :");
  scanf("%f",&s);
 
  printf("\n Enter hra:");
  scanf("%f",&h);
  
  printf("\n Enter ta:);
  scanf("%f",&t);

  printf("\n Enter da:);
  scanf("%f",&d);

  printf("\n Enter pf:);
  scanf("%f",&p);


  if(s >= 5000)
  {
	hr= (s * h);
	ta=(s * t);
	da=(s * d);
	pf=(s * p);


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
  printf("\n Hr Rs =%.2f",h);
  printf("\n Ta Rs =%.2f",t);
  printf("\n Da Rs =%.2f",d);
  printf("\n Pf Rs =%.2f",p);




  getch();

}
