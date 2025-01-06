#include<stdio.h>
void main()
{
	printf("If your given question is rigtht then input 'Y', otherwise 'N':");
	char a,b,c;
	printf("Have Your is Excellent:");
	a=getchar();
	if(a=='Y')
	{
		int age;
		printf("Enter Your Age:");
		scanf("%d",&age);
		if(age>=25 && age<=35)
		{
			printf("Have You Living in City:");
			fflush(stdin);
			b=getchar();
			if(b=='Y')
			{
				printf("Have You Male:");
				fflush(stdin);
				c=getchar();
				if(c=='Y')
				{
					printf("Premium is Rs. 4 per thousand and your policy amount cannot exceed Rs. 2 lakhs.\n");
					printf("Your maximum amount which can you insure is 800Rs.");
					printf("Your Premium rate is 0.4%.");
				}
				else
				{
					printf("Premium is Rs. 3 per thousand and your policy amount cannot exceed Rs. 1 lakh.");
					printf("Your maximum amount which can you insure is 300Rs.");
					printf("Your Premium rate is 0.3%.");
				}
			}
			else
			{
				printf("Person is not insure.");
			}
		}
		else
		{
			printf("Person is not insure.");
		}
	}
	else
	{
		int age;
		printf("Enter Your age:");
		scanf("%d",&age);
		if(age>=25 && age<=35)
		{
			printf("Have you Living in Village:");
			fflush(stdin);
			b=getchar();
			if(b=='Y')
			{
				printf("Have You Male:");
				fflush(stdin);
				c=getchar();
				if(c=='Y')
				{
					printf("Premium is Rs. 6 per thousand and ypur policy cannot exceed Rs. 10,000.");
					printf("Your maximum amount which can you insure is 60Rs.");
					printf("Your Premium rate is 0.6%.");
				}
				else
				{
					printf("Person is not insure.");
				}
			}
			else
			{
				printf("Person is not insure.");
			}
		}
		else
		{
			printf("Person is not insure.");
		}
	}
}
