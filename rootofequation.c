#include<stdio.h>
#include<math.h>
void main()/*ahi 'sqrt'no upayog karva mate math.h ne axis karvi pade che*/
{/*aa program khoto che tatha lakavano baki che.*/
  printf("ax2+bx+c=o");
  float a,b,c,x1,x2,delta;
  printf("\nEnter a:");
  scanf("%f",&a);
  printf("Enter b:");
  scanf("%f",&b);
  printf("Enter c:");
  scanf("%f",&c);
  delta=(b*b)-(4*a*c);
  if(delta<0){
  	printf("Your Reminder not Valid.");
  }
  else if(delta>=0){
  	x1=-(b)/(2*a)+sqrt(delta)/(2*a);
  	x2=-(b)/(2*a)-sqrt(delta)/(2*a);
  	printf("Your Reminder is %f or %f.",x1,x2);
  }
}
