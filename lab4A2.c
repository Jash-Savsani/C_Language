#include<stdio.h>
void main()
{
	int w,h;
	float bmi;
	printf("Enter Your Height");
	scanf("%d",&h);
	printf("Enter Your Weight");
	scanf("%d",&w);
	bmi=(float)w/(h*h);
	if(bmi<15)
	{
		printf("Your BMI category is Starvation : %f",bmi);
	}
	else if(bmi>=15.1 && bmi<=17.5)
	{
		printf("Your BMI category is Anorexic : %f",bmi);
	}
	else if(bmi>=17.6 && bmi<=18.5)
	{
		printf("Your BMI category is Underwight : %f",bmi);
	}
	else if(bmi>=18.6 && bmi<=24.9)
	{
		printf("Your BMI category is Ideal : %f",bmi);
	}
	else if(bmi>=25.0 && bmi<=25.9)
	{
		printf("Your BMI category is Overweight : %f",bmi);
	}
	else if(bmi>=30.0 && bmi<=30.9)
	{
		printf("Your BMI category is Obese : %f",bmi);
	}
	else if(bmi>=40)
	{
		printf("Your BMI category is Morbidly obese : %f",bmi);
	}
}
