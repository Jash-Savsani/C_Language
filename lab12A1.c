/*Twenty-five numbers are entered from the keyboard into an array. 
Write a program to find out how many of them are positive, negative, even and odd.*/
#include<stdio.h>
void main()
{
	int i,a[25],p=0,n=0,o=0,e=0;
	for(i=0;i<25;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)//even
		{
			e++;
			if(a[i]>0)
			{
				p++;	
			}
			else if(a[i]<0)
			{
				n++;	
			}	
		}
		else//odd
		{
			o++;
			if(a[i]>0)
			{
				p++;	
			}
			else if(a[i]<0)
			{
				n++;	
			}	
		}	
	}
	printf("\n\nTotal Positive:%d\nTotal Negative:%d\nTotal Even:%d\nTotal Odd:%d",p,n,e,o);
	
	
}
