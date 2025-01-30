//Write a program to guess a number. When user guesses the correct number program 
//prints congratulations.
#include<stdio.h>
void main()
{
	int i;
	char j;
	printf("Here, we Play guess Number Game,\nIf you Guess correct Number input Y other wisw N.\n");
	for(i=0;;i+=5)
	{
		printf("Your Guess Number is %d?",i);
		scanf("%c",&j);
		if(j=='Y')
		{
			printf("Congratulatios!!!");
			break;
		}
	}
}

