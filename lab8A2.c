#include<stdio.h>
void main()
{
	int i,a=5;
	char b;
	printf("Guess Number in Multiply of Five.\nReady...\n");
	while(1)
	{
		printf("Num is %d, if it's True Input 't', else Input 'f':",a);
		b=getchar();
		if(b=='t')
		{
			printf("Congratulations!!");
			break;
		}
		a+=5;
	}
}
