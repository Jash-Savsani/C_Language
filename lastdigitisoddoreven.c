#include<stdio.h>
void main()
{
	int n;//anya logic vade pan program karvani try karvi.
	printf("Enter Your Number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("Last Digit of the number is Even.");
	}
	else if(n%2==1){
		printf("Last Digit of the number is Odd.");
	}
}
