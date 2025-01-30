/*3 4 5 is Pythagorean triplet where 3*3+4*4=5*5. 
Write a program to generate Pythagorean triplets in 1 to 100.*/
#include<stdio.h>
void main()
{
	int i,k,j,sum1,sum2;
	for(i=1;i<=100;i++)
	{
		for(j=i;j<=100;j++)
		{
			for(k=j;k<=100;k++)
			{
				sum1=(i*i)+(j*j);
				sum2=(k*k);
				if(sum1==sum2)
				{
					printf("(%d*%d)+(%d*%d)=(%d*%d)\n",i,i,j,j,k,k);
				}
			}
		}
	}
}
