//3 4 5 is Pythagorean triplet where 3*3+4*4=5*5. 
//Write a program to generate Pythagorean triplets in 1 to 100.
#include<stdio.h>//imp
void main()
{
	int i,j,k,a,b,c,d;
	i=1;
	while(i<=100)
	{
		j=i;//also can write j=1
		while(j<=100)
		{
			k=j;//also can write k=1;
			while(k<=100)
			{
				c=(k*k);
				b=(j*j);
				a=(i*i);
				d= a+b;
				if(d == c)
				{
					printf("(%d*%d)+(%d*%d)=(%d*%d)\n",i,i,j,j,k,k);	
				}		
				k++;
			}
			j++;
		}
		i++;
	}
	
}
