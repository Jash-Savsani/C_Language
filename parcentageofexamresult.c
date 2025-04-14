#include<stdio.h>
int main()
{
	int bio,che,phy,san,eng,res;
	printf("Enter Your Marks in Biology:");
	scanf("%d",&bio);
	printf("Enter Your Marks in Chemestry:");
	scanf("%d",&che);
	printf("Enter Your Marks in Physics:");
	scanf("%d",&phy);
	printf("Enter Your Marks in Sanskrit:");
	scanf("%d",&san);
	printf("Enter Your Marks in English:");
	scanf("%d",&eng);
	res=(bio+che+phy+san+eng)/5;
	if (res<=35){
		printf("Sorry, Your Percentage is %d and \nYour Class is Fail.",res);
	}
	else if(res<=45){
		printf("Good, Your Percentage is %d and \nYour Class is Pass.",res);
	}
	else if(res<=60){
		printf("VeryGood, Your Percentage is %d and \nYour Class is Second.",res);
	}
	else if(res<=70){
		printf("Excellant, Your Percentage is %d and \nYour Class is First.",res);
	}
}

