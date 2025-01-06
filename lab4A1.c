#include<stdio.h>
void main()
{
	int n;
	printf("Enter Boxer's Weight:");
	scanf("%d",&n);
	if(n<115)
	{
		printf("Your class weight is Flyweight.");
	}
	else if(n>=115 && n<=121)
	{
		printf("Your class weight is Bantamweight.");
	}
		else if(n>=122 && n<=153)
	{
		printf("Your class weight is Featheweight.");
	}
		else if(n>=154 && n<=189)
	{
		printf("Your class weight is Middleweight.");
	}
		else if(n>=190)
	{
		printf("Your class weight is Heavyweight.");
	}
}
