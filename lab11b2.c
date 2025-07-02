#include<stdio.h>
void main()
{
	int r,i,n,f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		r=n%10;
		if(r==1)
		{
			f1++;
		}
		else if(r==2)
		{
			f2++;
		}
		else if(r==3)
		{
			f3++;
		}
		else if(r==4)
		{
			f4++;
		}
		else if(r==5)
		{
			f5++;
		}
		else if(r==6)
		{
			f6++;
		}
		else if(r==7)
		{
			f7++;
		}
		else if(r==8)
		{
			f8++;
		}
		else if(r==9)
		{
			f9++;
		}
		else if(r==0)
		{
			f0++;
		}
		n=n/10;
	}
	printf("Frequency of 0 is:%d",f0);
	printf("\nFrequency of 1 is:%d",f1);
	printf("\nFrequency of 2 is:%d",f2);
	printf("\nFrequency of 3 is:%d",f3);
	printf("\nFrequency of 4 is:%d",f4);
	printf("\nFrequency of 5 is:%d",f5);
	printf("\nFrequency of 6 is:%d",f6);
	printf("\nFrequency of 7 is:%d",f7);
	printf("\nFrequency of 8 is:%d",f8);
	printf("\nFrequency of 9 is:%d",f9);
}
