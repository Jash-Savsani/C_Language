/*Euler’s number e is used as the base of natural logarithms. It can be approximated using the
following formula:
e=1+1/1!+1/2!+1/3!.........1/n!
Write a program that approximates e using a loop that terminates when the difference between
two successive value of e differ by less than 0.0000001*/
#include<stdio.h>//bakki che
 double ED(double E1){
 	double i,j,k=1.0,l=0.0,sub,e;
	int count=2;
	printf("Enter e%d for Subtraction:",count);
	scanf("%lf",&e);
	for(i=1.0;i<=e;i++)
	{
		for(j=1.0;j<=i;j++)
		{
			k*=j;
		}
		l+=(1.0/k);
	}
	printf("e%d is: %10.8lf",count,l);
	sub=(E1-l);
	if(sub>(double)0.0000001)
	{
		printf("Subtraction of e1 ans e%d is= ",count);
		return sub;
	}
	else{
		count++;
		double(E1);
	}
	
}
void main()
{
	double ans,j,e1,e2,i,k=1.0,l=0.0;
	printf("Enter e1 Number of Terms: ");
	scanf("%lf",&e1);
	for(i=1.0;i<=e1;i++)
	{
		for(j=1.0;j<=i;j++)
		{
			k*=j;
		}
		l+=(1.0/k);
	}
	printf("Your e%10.8lf is:%10.8lf\n",e1,l);
	ans=ED(l);
	printf("%10.8lf",ans);
}
