#include<stdio.h>
void main()
{
    char a;
    printf("Enter any Character from Key-Board:");
    scanf("%c",&a);
    if('A'<=a && a<='Z')
    {
    	printf("You Have Enter Capital Latter %c and it's ASCII values is: %d",a,a);
	}
	else if('a'<=a && a<='z')
	{
		printf("You Have Enter Small Latter %c and it's ASCII values is: %d",a,a);
	}
	else if('0'<=a && a<='9')
	{
		printf("You Have Enter Decimal Number %c and it's ASCII values is: %d",a,a);
	}
	else
	{
		printf("You Have Enter Special Symbol %c and it's ASCII values is: %d",a,a);
	}
	
	
}
