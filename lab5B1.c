#include<stdio.h>
void main()
{
	int k,j,n,l;
	
	printf("\n1. Factorial of Number.");
	printf("\n2. Prime or not.");
	printf("\n3. Odd or even.");
	printf("\n4. Exit.\n");
	scanf("%d",&j);
	for(k=5;k!=4;k++)
	switch(j)
	{
		case 1: printf("Enter a Number:");
				scanf("%d",&n);
				if(n==0 || n==1)
				{
					printf("1");
				}
				else if(n>1)
				{
					int ans=1,i;
					for(i=1;i<=n;i++)
					{
						ans*=i;
					}
					printf("%d",ans);
				}
				else
				{
					printf("Invalid.");
				}
				printf("\nEnter 1 or 4.");
				scanf("%d",&l);
				if(l==1)
				{
					j=1;
				}
				else
				{
					j=4;
				}
				break;
			
		case 2: printf("Enter a Number:");
				scanf("%d",&n);
				for(j=2;j<n;j++)
				{
					if(n%j==0)
					{
						printf("Given number is not prime.");
						j=0;
						break;
					}
				}
				if(j!=0)
				{
					printf("Given number is prime.");
				}
				printf("\nEnter 2 or 4.");
				scanf("%d",&l);
				if(l==2)
				{
					j=2;
				}
				else
				{
					j=4;
				}
				break;
			
		case 3: printf("Enter a Number:");
				scanf("%d",&n);
				if(n%2==0)
				{
					printf("Given Number is even.");
				}
				else
				{
					printf("Given Number is odd.");
				}
				printf("\nEnter 3 or 4.");
				scanf("%d",&l);
				if(l==3)
				{
					j=3;
				}
				else
				{
					j=4;
				}
				break;
		case 4: printf("Exit");
				k=3;
	}
}
